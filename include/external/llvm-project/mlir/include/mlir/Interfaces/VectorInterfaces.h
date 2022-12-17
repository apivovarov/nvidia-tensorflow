//===- VectorInterfaces.h - Vector interfaces -----------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file implements the operation interfaces for vector ops.
//
//===----------------------------------------------------------------------===//

#ifndef MLIR_INTERFACES_VECTORINTERFACES_H
#define MLIR_INTERFACES_VECTORINTERFACES_H

#include "mlir/IR/AffineMap.h"
#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/OpDefinition.h"

namespace mlir {
namespace vector {
namespace detail {

/// Given the vector type and the permutation map of a vector transfer op,
/// compute the expected mask type.
VectorType transferMaskType(VectorType vecType, AffineMap map);

} // namespace detail
} // namespace vector
} // namespace mlir

/// Include the generated interface declarations.
#include "mlir/Interfaces/VectorInterfaces.h.inc"

#endif // MLIR_INTERFACES_VECTORINTERFACES_H

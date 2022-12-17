//===- PassDetail.h - Arithmetic Pass details -------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef DIALECT_ARITHMETIC_TRANSFORMS_PASSDETAIL_H_
#define DIALECT_ARITHMETIC_TRANSFORMS_PASSDETAIL_H_

#include "mlir/IR/BuiltinOps.h"
#include "mlir/Pass/Pass.h"

namespace mlir {

namespace bufferization {
class BufferizationDialect;
} // namespace bufferization

namespace func {
class FuncDialect;
} // namespace func

namespace memref {
class MemRefDialect;
} // namespace memref

#define GEN_PASS_CLASSES
#include "mlir/Dialect/Arithmetic/Transforms/Passes.h.inc"

} // namespace mlir

#endif // DIALECT_ARITHMETIC_TRANSFORMS_PASSDETAIL_H_

//===-- gcov.h ------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file provides the public interface for functions which are available to
// end-users when using gcov(3).
//
//===----------------------------------------------------------------------===//

#ifndef	COMPILER_RT_GCOV_H
#define	COMPILER_RT_GCOV_H

/*
 * - Write profile information/counters out to their appropriate GCDA files.
 * - Reset profile counters to zero.
 */
extern void __gcov_flush(void);

#endif

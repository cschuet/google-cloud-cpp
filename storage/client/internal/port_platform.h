// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_STORAGE_CLIENT_INTERNAL_PORT_PLATFORM_H_
#define GOOGLE_CLOUD_CPP_STORAGE_CLIENT_INTERNAL_PORT_PLATFORM_H_

/**
 * @file
 *
 * Platform portability details.
 *
 * This file discover details about the platform (compiler, OS, and hardware
 * features) and defines objects and types (mostly macros) to adapt the code.
 * The file should be fairly minimal because we rely on gRPC to deal with most
 * of the platform problems.
 */

// With Microsoft Visual Studio we need an extra header for the word boolean
// operators.
#include <ciso646>

// Turn off clang-format because these nested #if/#endif blocks are more
// readable with indentation.
// clang-format off

// Abort compilation if the compiler does not support C++11.
#ifndef _MSC_VER
// Microsoft Visual Studio does not define __cplusplus correctly for C++11.
#  if __cplusplus < 201103L
#    error "Google Cloud Storage C++ Client requires C++11"
#  endif  // __cplusplus < 201103L
#elif _MSC_VER < 1900
#  error "Google Cloud Storage C++ Client requires C++11, your version of MSVC is too old"
#endif  // _MSC_VER

// Discover if exceptions are enabled and define them as needed.
#ifdef GOOGLE_CLOUD_CPP_HAVE_EXCEPTIONS
#  error GOOGLE_CLOUD_CPP_HAVE_EXCEPTIONS should not be directly set.
#elif defined(__clang__)
#  if defined(__EXCEPTIONS) && __has_feature(cxx_exceptions)
#    define GOOGLE_CLOUD_CPP_HAVE_EXCEPTIONS 1
#  endif  // defined(__EXCEPTIONS) && __has_feature(cxx_exceptions)
#elif defined(_MSC_VER)
#  if defined(_CPPUNWIND)
#    define GOOGLE_CLOUD_CPP_HAVE_EXCEPTIONS 1
#  endif  // defined(_CPPUNWIND)
#elif defined(__GNUC__)
#  if (__GNUC__ < 5) && defined(__EXCEPTIONS)
#    define GOOGLE_CLOUD_CPP_HAVE_EXCEPTIONS 1
#  elif (__GNUC__ >= 5) && defined(__cpp_exceptions)
#    define GOOGLE_CLOUD_CPP_HAVE_EXCEPTIONS 1
#  endif  // (__GNUC__ >= 5) && defined(__cpp_exceptions)
#elif defined(__cpp_exceptions)
   // This should work in increasingly more and more compilers.
   // https://isocpp.org/std/standing-documents/sd-6-sg10-feature-test-recommendations
#  define GOOGLE_CLOUD_CPP_HAVE_EXCEPTIONS 1
#endif  // GOOGLE_CLOUD_CPP_HAVE_EXCEPTIONS
// clang-format on

#endif  // GOOGLE_CLOUD_CPP_STORAGE_CLIENT_INTERNAL_PORT_PLATFORM_H_

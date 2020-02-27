// C API for reinforcement learning environments

// Environment libraries are normal C shared libraries, providing
// the interface described here.  Each library must implement all
// functions.

#pragma once

// allow this header to be included by a C++ file

#include <string>
#include <iostream>
#include "libenv.h"
#include "src/vecgame.h"
#include "src/cpp-utils.h"
#include "typeinfo"
#include "src/vecoptions.h"
#include "src/game.h"
#include "src/basic-abstract-game.h"


#ifdef __cplusplus
extern "C" {
#endif


#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#if defined(_WIN32)
#if defined(__GNUC__)
#define LIBENV_API __attribute__((__dllexport__))
#else
#define LIBENV_API __declspec(dllexport)
#endif
#else
#if defined(__GNUC__)
#define LIBENV_API __attribute__((__visibility__("default")))
#else
#define LIBENV_API
#endif
#endif



#if !defined(NO_PROTOTYPE)

LIBENV_API void set_vars(libenv_venv *env, char *name, int value);

#endif

// END_CDEF

#ifdef __cplusplus
}
#endif
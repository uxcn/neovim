#ifndef NVIM_TYPES_H
#define NVIM_TYPES_H

#include <stdint.h>

// dummy to pass an ACL to a function
typedef void *vim_acl_T;

// Shorthand for unsigned variables. Many systems, but not all, have u_char
// already defined, so we use char_u to avoid trouble.
typedef unsigned char char_u;

// Can hold one decoded UTF-8 character.
typedef uint32_t u8char_T;

#endif  // NVIM_TYPES_H

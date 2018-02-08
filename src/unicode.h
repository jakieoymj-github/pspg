/*-------------------------------------------------------------------------
 *
 * unicode.h
 *	  unicode and wide chars routines
 *
 * Portions Copyright (c) 2017-2018 Pavel Stehule
 *
 * IDENTIFICATION
 *	  src/unicode.h
 *
 *-------------------------------------------------------------------------
 */

#ifndef PSPG_UNICODE_H
#define PSPG_UNICODE_H

#include <stdlib.h>
#include <stdbool.h>

extern size_t utf8len(char *s);
extern size_t utf8len_start_stop(const char *start, const char *stop);
extern int utf8charlen(char ch);
extern int utf_dsplen(const char *s);
extern const char *utf8_nstrstr(const char *haystack, const char *needle);
extern const char *utf8_nstrstr_ignore_lower_case(const char *haystack, const char *needle);
extern bool utf8_isupper(const char *s);


#endif

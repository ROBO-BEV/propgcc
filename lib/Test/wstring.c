/*
 * Implementation of wide character functions
 *
 * Copyright (c) 2012 Parallax, Inc.
 * Written by Eric R. Smith, Total Spectrum Software Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files
 * (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#include <ctype.h>
#include <wchar.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define string__(x) #x
#define string_(x) string__(x)

wchar_t s1[] = L"hello, ";
wchar_t s2[] = L"world";


int
main()
{
  wchar_t d1[32];
  wchar_t *x;
  size_t n;

  printf("checking wide character string operations..."); fflush(stdout);
  x = wcscpy(d1, s1);
  assert(x == d1);
  x = 0;
  x = wcscat(d1, s2);
  assert(x == d1);
  n = wcslen(d1);
  assert(n == 12);

  x = wcschr(s1, L'e');
  assert(x == &s1[1]);
  x = wcschr(s1, L'w');
  assert(x == NULL);
  x = wcsrchr(s1, L'l');
  assert(x == &s1[3]);
  x = wcsrchr(s1, L'z');
  assert(x == NULL);

  printf(" ok\n");
  return 0;
}

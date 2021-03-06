/* Configuration file for ARM BPABI targets, library renames.
   Copyright (C) 2010
   Free Software Foundation, Inc.
   Contributed by CodeSourcery, LLC   

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3, or (at your
   option) any later version.

   GCC is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License and
   a copy of the GCC Runtime Library Exception along with this program;
   see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
   <http://www.gnu.org/licenses/>.  */

#if defined (__thumb__)
#define RENAME_LIBRARY_SET ".thumb_set"
#else
#define RENAME_LIBRARY_SET ".set"
#endif

/* Make __aeabi_AEABI_NAME an alias for __GCC_NAME.  */
#define RENAME_LIBRARY(GCC_NAME, AEABI_NAME)		\
  __asm__ (".globl\t__aeabi_" #AEABI_NAME "\n"		\
	   RENAME_LIBRARY_SET "\t__aeabi_" #AEABI_NAME 	\
	     ", __" #GCC_NAME "\n");

/* Give some libgcc functions an additional __aeabi name.  */
#ifdef L_muldi3
#define DECLARE_LIBRARY_RENAMES RENAME_LIBRARY (muldi3, lmul)
#endif
#ifdef L_muldi3
#define DECLARE_LIBRARY_RENAMES RENAME_LIBRARY (muldi3, lmul)
#endif
#ifdef L_fixdfdi
#define DECLARE_LIBRARY_RENAMES RENAME_LIBRARY (fixdfdi, d2lz) \
  extern DWtype __fixdfdi (DFtype) __attribute__((pcs("aapcs"))); \
  extern UDWtype __fixunsdfdi (DFtype) __asm__("__aeabi_d2ulz") __attribute__((pcs("aapcs")));
#endif
#ifdef L_fixunsdfdi
#define DECLARE_LIBRARY_RENAMES RENAME_LIBRARY (fixunsdfdi, d2ulz) \
  extern UDWtype __fixunsdfdi (DFtype) __attribute__((pcs("aapcs")));
#endif
#ifdef L_fixsfdi
#define DECLARE_LIBRARY_RENAMES RENAME_LIBRARY (fixsfdi, f2lz) \
  extern DWtype __fixsfdi (SFtype) __attribute__((pcs("aapcs"))); \
  extern UDWtype __fixunssfdi (SFtype) __asm__("__aeabi_f2ulz") __attribute__((pcs("aapcs")));
#endif
#ifdef L_fixunssfdi
#define DECLARE_LIBRARY_RENAMES RENAME_LIBRARY (fixunssfdi, f2ulz) \
  extern UDWtype __fixunssfdi (SFtype) __attribute__((pcs("aapcs")));
#endif
#ifdef L_floatdidf
#define DECLARE_LIBRARY_RENAMES RENAME_LIBRARY (floatdidf, l2d)
#endif
#ifdef L_floatdisf
#define DECLARE_LIBRARY_RENAMES RENAME_LIBRARY (floatdisf, l2f)
#endif

/* These renames are needed on ARMv6M.  Other targets get them from
   assembly routines.  */
#ifdef L_fixunsdfsi
#define DECLARE_LIBRARY_RENAMES RENAME_LIBRARY (fixunsdfsi, d2uiz)
#endif
#ifdef L_fixunssfsi
#define DECLARE_LIBRARY_RENAMES RENAME_LIBRARY (fixunssfsi, f2uiz)
#endif
#ifdef L_floatundidf
#define DECLARE_LIBRARY_RENAMES RENAME_LIBRARY (floatundidf, ul2d)
#endif
#ifdef L_floatundisf
#define DECLARE_LIBRARY_RENAMES RENAME_LIBRARY (floatundisf, ul2f)
#endif

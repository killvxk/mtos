#ifndef _SYS_MMAN_H
#define _SYS_MMAN_H

/* sys/mman.h - private header for memory maps */

#if __POCC__ >= 500
#pragma once
#endif

#include <sys/types.h>

/* type definitions */
#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#if __POCC_TARGET__ == 3
typedef unsigned long long size_t;
#else
typedef unsigned int size_t;
#endif
#endif /* _SIZE_T_DEFINED */

#define _PROT_READ      0x01    /* data can be read */
#define _PROT_WRITE     0x02    /* data can be written */
#define _PROT_EXEC      0x04    /* data can be executed */
#define _PROT_NONE      0x00    /* data cannot be accessed */

#define _MAP_SHARED     0x00    /* changes are shared */
#define _MAP_PRIVATE    0x01    /* changes are private */
#define _MAP_FIXED      0x02    /* interpret address exactly */

#define _MAP_FAILED  ((void *)-1)

/* declarations */
EXPORTSTART
void * __CDECL _mmap(void *, size_t, int, int, int, _off_t);
int __CDECL _msync(void *, size_t, int);
int __CDECL _munmap(void *, size_t);
EXPORTEND
/* compatibility names */

#define PROT_READ  _PROT_READ
#define PROT_WRITE  _PROT_WRITE
#define PROT_EXEC  _PROT_EXEC
#define PROT_NONE  _PROT_NONE

#define MAP_SHARED  _MAP_SHARED
#define MAP_PRIVATE  _MAP_PRIVATE
#define MAP_FIXED  _MAP_FIXED

#define MAP_FAILED  _MAP_FAILED

EXPORTSTART
void * __CDECL mmap(void *, size_t, int, int, int, off_t);
int __CDECL msync(void *, size_t, int);
int __CDECL munmap(void *, size_t);
EXPORTEND


#endif /* _SYS_MMAN_H */


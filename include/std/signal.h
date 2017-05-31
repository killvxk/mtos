#ifndef _SIGNAL_H
#define _SIGNAL_H

/* signal.h - C99 standard header */

#if __POCC__ >= 500
#pragma once
#endif

/* type definitions */
typedef int sig_atomic_t;
typedef void __cdecl __sigfunc(int);

/* signal codes */
#define SIGINT  2
#define SIGILL  4
#define SIGABRT  6
#define SIGFPE  8
#define SIGSEGV  11
#define SIGTERM  15

/* signal return values */
#define SIG_DFL  ((__sigfunc *)0)
#define SIG_ERR  ((__sigfunc *)-1)
#define SIG_IGN  ((__sigfunc *)1)

/* declarations */
extern int __cdecl raise(int);
extern __sigfunc * __cdecl signal(int, __sigfunc *);

typedef unsigned long __sigset_t;

#endif /* _SIGNAL_H */


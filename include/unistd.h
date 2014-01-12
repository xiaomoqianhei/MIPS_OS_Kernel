#ifndef UNISTD_H
#define UNISTD_H

// #define __SYSCALL_BASE 9527  // pds-----------
#define __SYSCALL_BASE 0
#define __NR_SYSCALLS 20


#define SYS_putchar 		((__SYSCALL_BASE ) + (0 ) )
#define SYS_printf		((__SYSCALL_BASE ) + (1 ) )
#define SYS_exit		((__SYSCALL_BASE ) + (2 ) )
#endif
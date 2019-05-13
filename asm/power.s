# As result 2^3 + 5^2

.section .data
.section .text

.globl _start

_start:
    movl $1, %eax
    movl $0, %ebx
    int $0x80

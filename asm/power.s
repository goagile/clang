# As result 2^3 + 5^2

.section .data
.section .text

.globl _start

_start:
    # stack:
    #  0:| .    | <-%esp

    push $3     # push 1 long (-4 byte)
    # stack:
    #  0:| .    |
    # -4:| 3    | <-%esp

    push $2     # push 1 long (-4 byte)
    # stack:
    #  0:| .    |
    # -4:| 3    |
    # -8:| 2    | <-%esp

    call power

    add $8, %rsp # move stack back 2 long (+8 byte)
    # stack:
    #  0:| .    | <-%esp
    # -4:| 3    |
    # -8:| 2    | 

    push %rax   # save first answer
    # stack:
    #  0:| .    | 
    # -4:| %eax | <-%esp
    # -8:| 2    | 

    mov $1, %rax
    mov $0, %rbx
    int $0x80

.type power, @function
power:
    #
    # GOAL: base^power
    # 
    # IN: base, power
    #
    # OUT: base^power
    #
    # VAR:
    #   %rbx        power
    #   %rcx        base
    #   -4(%rbp)    current result
    #   %rax        temp
    #
    
    push %rbp       # return address ?
    # stack:
    #   0:| .    |
    #  -4:| 3    |
    #  -8:| 2    | 
    # -12:| %rbp | <-%rsp

    mov %rsp, %rbp
    # %rbp: -12

    # stack:
    #   0:| .    |
    #  -4:| 3    |
    #  -8:| 2    | 
    # -12:| %rbp | <-%rsp <-%rbp

    sub $4, %rsp    # local storage
    # stack:
    #   0:| .    |
    #  -4:| 3    |
    #  -8:| 2    | 
    # -12:| %rbp | <-%rbp
    # -16:|      | <-%rsp

    mov 8(%rbp), %rbx
    # power
    # %rbx: 3

    mov 12(%rbp), %rcx
    # base
    # %rcx: 2

    mov %rcx, -4(%rbp)
    # stack:
    #   0:| .    |
    #  -4:| 3    |
    #  -8:| 2    | 
    # -12:| %rbp | <-%rbp
    # -16:| 2    | <-%rsp

#power_loop:

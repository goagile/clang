# As result 2^3 + 5^2

.section .data
.section .text

.globl _start

_start:
    # stack:
    #  0:| .    | <- %esp

    push $3     # push 1 long (-4 byte)
    # stack:
    #  0:| .    |
    # -4:| 3    | <- %esp

    push $2     # push 1 long (-4 byte)
    # stack:
    #  0:| .    |
    # -4:| 3    |
    # -8:| 2    | <- %esp

    # call power

    add $8, %rsp # move stack back 2 long (+8 byte)
    # stack:
    #  0:| .    | <- %esp
    # -4:| 3    |
    # -8:| 2    | 

    push %rax   # save first answer
    # stack:
    #  0:| .    | 
    # -4:| %eax | <- %esp
    # -8:| 2    | 

    mov $1, %rax
    mov $0, %rbx
    int $0x80

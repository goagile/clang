# ASM

## Assemble and Link

Assembler `/usr/bin/as`
Linker `/usr/bin/ld`

Assembly

```bash

    as exit.s -o exit.o

```

Link

```bash

    ld exit.o -o exit

```

## Check exit status of program

```bash

    echo $?

```

## SysCall

`$1` - exit() syscall

## Arch x86 registers

General-purpose registers

`%eax`
`%ebx`
`%ecx`
`%edx`

`%edi`
`%esi`

Additional registers

`%edp`
`%esp`
`%eip`

`%eflags`

## Section Data

```s

.section .data

list:
    .long 3,67,34,222,45,75,54,34,44,33,22,11,66,0

```

## Section Text

```s

.section .text

```

## Start

`_start` entry symbol

```s

.globl _start

_start:
    # ... code

```

## Types

`.byte`  - 1 storage location [0-255]  

`.int`   - 2 storage location [0-65535]

`.long`  - 4 storage locatons [0-4294967295]

```s

.section .data
list:
    .long 5,1,2,3
    # 1 element of the list has 4 storage location = 4 bytes
    # 4 elements of list = 4 * 4 bytes = 16 bytes

```

`.ascii` - 1 storage locaton per character (1 byte)

```s

.section .text
hello:
    .ascii "hello\0"
    # 'h', 'e', 'l', 'l', 'o', '\0' = 6 bytes
    # 6 numeric codes, one for each character

```

## Commands

### Move

```s

movl %eax, %ebx

```

#### Get element from list

```s

movl BEGINNINGADDRESS(,%INDEXREGISTER,WORDSIZE)

```

`list` - is the location number of the start of our number list
each number has 4 storage locations
(because we declared it using `.long` type)

`%edi = 0`

```s

movl list(,%edi,4), %eax

```

### Compare

`cmpl a, b`

`cmpl` command compare two values and put the result into status register.

`%eflags` - status register

Compare a register to equal zero.

```s

cmpl $0, %eax

```

### Jump

`je` - jump if values were equal
`jg` - jump if the second value was greater than the first value.
`jge` - jump if the second value was greater or equal t o the first value
`jl` - jump if the second value was less than the first value
`jle` - jump if the second value was less or equal than the first value
`jmp` - jump no matter what.

### Increment

Increment of counter

```s

incl %edi

```

### Exit

To exit from the program put `$1` as exit command to `a` rigister
and call `$0x80` interruption.

```s

movl $1, %eax
int $0x80

```

## Debugger GDB

### Start GDB

Assemple, Link and run GDB

```bash

as --gstabs max.s -o ./bin/max.o
ld ./bin/max.o -o ./bin/max
gdb ./bin/max

```

Run program

```bash

(gdb) run

```

### Instructions

Step-by-Step instructions

```bash

(gdb) stepi

```

Print register

```bash

(gdb) print/d $eax

```

Out from GDB

```bash

(gdb) quit

```

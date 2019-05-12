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

## Check exit status

```bash

    echo $?

```

## SysCall

`$1` - exit() syscall

## Arch x86

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

## Commands

`movl a, b`
`cmp a, b`

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

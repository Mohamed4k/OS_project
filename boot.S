.section .text
.global _start

_start:
    bl kernel_main
    b .

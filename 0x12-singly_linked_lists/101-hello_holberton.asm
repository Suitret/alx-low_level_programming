section .data
    message db 'Hello, Holberton', 0Ah, 0

section .text
    global _start

_start:
    ; prepare arguments for printf
    mov rdi, message
    xor rax, rax
    ; call printf
    call printf
    ; exit program
    mov eax, 60
    xor rdi, rdi
    syscall


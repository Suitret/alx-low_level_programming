section .data
    hello: db 'Hello, Holberton', 0
section .text
    global main
    extern printf
main:
    push rbp        ; Save the base pointer
    mov rbp, rsp    ; Set the base pointer
    mov edi, hello  ; First argument: the string to print
    xor eax, eax    ; Set EAX to 0
    call printf     ; Call printf
    mov eax, 0      ; Set the return value to 0
    pop rbp         ; Restore the base pointer
    ret             ; Return from the function


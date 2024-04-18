extern __errno_location

section .text
    global ft_write

ft_write:
    mov rax, 1
    syscall

    test rax, rax
    je .error
    ret

.error:
    mov rdi, rax
    push rdi
    call __errno_location
    pop rdi
    mov [rax], rdi
    mov rax, -1
    ret
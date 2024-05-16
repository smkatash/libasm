extern __errno_location

section .text
    global ft_read

ft_read:
    mov rax, 0
    syscall

    test rax, rax
    je .error
    ret

.error:
    mov rdi, rax
    push rdi
    call __errno_location
    pop rdi
    neg rdi ; if linux distro, should be negated, kernel returns negative error code -> double negation will give positive errno value. MacOs does not negation
    mov [rax], rdi
    mov rax, -1
    ret
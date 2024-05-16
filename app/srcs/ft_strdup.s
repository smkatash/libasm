section .text
    extern ft_strlen
    extern ft_strcpy
    global ft_strdup
    extern __errno_location

ft_strdup:
	call ft_strlen
    inc rax ; len + 1
    push rdi
    mov rdi, rax
    extern malloc
    call malloc
    test rax, rax
    je .error
    mov rdi, rax
    pop rsi
    call ft_strcpy
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

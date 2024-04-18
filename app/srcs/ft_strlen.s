section .text
	global ft_strlen

ft_strlen:
	xor rcx, rcx

loop:
    cmp BYTE [rdi + rcx], 0 
    je break
    inc rcx
    jmp loop

break:
    mov rax, rcx 
    ret

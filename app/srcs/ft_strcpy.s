section .text
	global ft_strcpy

ft_strcpy:
	test rsi, rsi
    je return
    mov rax, rdi
    xor rcx, rcx

loop:
    mov dl, BYTE [rsi + rcx]
    mov BYTE [rdi + rcx], dl
    cmp BYTE [rsi + rcx], 0
    je return
    inc rcx
    jmp loop


return:
    ret

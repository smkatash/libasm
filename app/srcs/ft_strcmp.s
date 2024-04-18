section .text
	global ft_strcmp

ft_strcmp:
	xor rcx, rcx

loop:
    mov al, BYTE [rdi + rcx]
    mov dl, BYTE [rsi + rcx]
    cmp al, 0
    je break
    cmp dl, 0
    je break
    cmp al, dl
    jne break
    inc rcx
    jmp loop


break:
    movzx rax, al
    movzx rdx, dl
    sub rax, rdx
    ret

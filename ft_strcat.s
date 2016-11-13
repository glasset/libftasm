global _ft_strcat

_ft_strcat:
	push rbp
	mov rbp, rsp
	push rdi
	push rsi

loop:
	cmp BYTE [rdi], 0
	jz cpy
	inc rdi
	jmp loop

cpy:
	cmp BYTE [rsi], 0
	jz end
	mov al, [rsi]
	mov [rdi], al
	inc rdi
	inc rsi
	jmp cpy

end:
	mov BYTE [rdi], 0
	pop rsi
	pop rdi
	mov rax, rdi ; rax ret value
	mov rsp, rbp
	pop rbp
	ret

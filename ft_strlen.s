global _ft_strlen

_ft_strlen:
	xor rbx, rbx ; init int
	mov rcx, rdi

loop:
	cmp BYTE [rcx], 0x0
	je end
	inc rbx ; inc int
	inc rcx ;inc *str
	jmp loop

end:
	mov rax, rbx
	ret

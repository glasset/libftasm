global _ft_memcpy

_ft_memcpy:
	push rbp
	mov rbp, rsp
	push rdi
	cmp rdi, 0x0 ;string null go ret
	je end
	mov rcx, rdx ; store len on rcx for rep movsb
	mov rax, rsi ; store value on rax for rep movsb
	rep movsb

end:
	pop rdi
	mov rax, rdi
	mov rsp, rbp
	pop rbp
	ret

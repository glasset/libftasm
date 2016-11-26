global _ft_memset

_ft_memset:
	push rbp
	mov rbp, rsp
	push rdi
	cmp rdi, 0x0 ;string null go ret
	je end
	mov rcx, rdx ; store len on rcx for rep stos
	mov rax, rsi ; store value on rax for rep stos
	rep stosb

end:
	pop rdi
	mov rax, rdi
	mov rsp, rbp
	pop rbp
	ret

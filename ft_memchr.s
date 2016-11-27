global _ft_memchr

_ft_memchr:
	mov rcx, rdx
	mov al, sil; search for rsi char, 8bit register
	cld
	repne scasb ; search for (al) in string (rdi)
	je found
	xor rdi, rdi ; return NULL

end:
	mov rax, rdi
	ret

found:
	dec rdi ; -1 before char
	jmp end

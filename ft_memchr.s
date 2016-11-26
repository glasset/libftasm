global _ft_memchr

_ft_memchr:
	mov rcx, rdx
	mov al, sil; search for rsi char, 8bit register
	cld
	repne scasb ; search for (al) in string (rdi)
	dec rdi ; -1 before char

end:
	mov rax, rdi
	ret

global _ft_islower

_ft_islower:
	cmp rdi, 0x7a
	jg non_char
	cmp rdi, 0x61
	jge is_alpha

non_char:
	mov rax, 0x0
	ret

is_alpha:
	mov rax, 0x1
	ret


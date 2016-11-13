global _ft_isupper

_ft_isupper:
	cmp rdi, 0x41
	jl non_char
	cmp rdi, 0x5a
	jle is_alpha

non_char:
	mov rax, 0x0
	ret

is_alpha:
	mov rax, 0x1
	ret


global _ft_isascii

_ft_isascii:
	cmp rdi, 0o0
	jl not_ascii
	cmp rdi, 0o0177
	jle is_ascii

not_ascii:
	mov rax, 0x0
	ret

is_ascii:
	mov rax, 0x1
	ret

global _ft_isdigit

_ft_isdigit:
	cmp rdi, 0x30
	jl not_digit
	cmp rdi, 0x39
	jg not_digit

is_digit:
	mov rax, 0x1
	ret

not_digit:
	mov rax, 0x0
	ret


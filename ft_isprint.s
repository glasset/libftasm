global _ft_isprint

_ft_isprint:
	cmp rdi, 0x20
	jge is_print
	jmp not_print

is_print:
	cmp rdi, 0x7e
	jg not_print
	mov rax, 0x1
	ret

not_print:
	mov rax, 0x0
	ret


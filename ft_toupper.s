extern _ft_islower
global _ft_toupper

_ft_toupper:
	call _ft_islower
	cmp rax, 0x1
	je go_upper
	jmp end

end:
	mov rax, rdi
	ret

go_upper:
	sub rdi, 0x20
	jmp end

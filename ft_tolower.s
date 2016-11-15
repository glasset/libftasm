extern _ft_isupper
global _ft_tolower

_ft_tolower:
	call _ft_isupper
	cmp rax, 0x1
	je go_lower
	jmp end

end:
	mov rax, rdi
	ret

go_lower:
	add rdi, 0x20
	jmp end

extern _ft_isalpha
extern _ft_isdigit
global _ft_isalnum

_ft_isalnum:
	call _ft_isdigit
	cmp rax, 0x1
	je end
	jne _ft_isalpha

end:
	ret

extern _ft_isupper
extern _ft_islower
global _ft_isalpha

_ft_isalpha:
	call _ft_isupper
	cmp rax, 0x1
	je end
	jne _ft_islower

end:
	ret

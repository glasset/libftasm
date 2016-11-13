global _ft_bzero

_ft_bzero:

loop:
	cmp rsi, 0
	je  end
	mov BYTE [rdi], 0
	inc rdi
	dec rsi
	jmp loop

end:
	ret

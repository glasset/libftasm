global _ft_strlen

_ft_strlen:
	xor rcx, rcx ;
	not rcx ; reverse all bits
	xor al, al ; search for \0
	cmp rdi, 0x0 ;string null go ret
	je end
	cld
	repne scasb ; search for \0 (al) in string (rdi)
	not rcx
	dec rcx ; -1 for \0

end:
	mov rax, rcx
	ret

extern _ft_strlen
extern _ft_memcpy
extern _malloc

section .text
	global _ft_strdup

_ft_strdup:
	push rbp
	mov rbp, rsp
	push rdi ; save rdi before call strlen
	call _ft_strlen
	inc rax ; +1 for \0
	mov rdi, rax ; allocate size for malloc
	push rax ; save len
	call _malloc
	mov rdi, rax
	pop rax
	pop rdi
	mov rsi, rdi
	mov rdx, rax
	call _ft_memcpy
	mov rsp, rbp
	pop rbp
	ret

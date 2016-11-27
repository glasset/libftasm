extern _ft_strlen
extern _ft_memcpy
extern _malloc

section .text
	global _ft_strdup

global _ft_strjoin

_ft_strjoin:
	push rbp
	mov rbp, rsp
	push rsi
	push rdi
	call _ft_strlen
	mov r8, rax ; len s1

	mov rdi, rsi ; s2 in s1
	call _ft_strlen
	push r8
	add r8, rax;
	push rax

	mov rdi, r8
	inc rdi
	call _malloc

	pop rcx ; s2 len
	pop r8 ; s1 len
	pop rdi ; retrieve s1

	push rcx ; s2 len

	mov rsi, rdi ; s1 in 2param
	mov rdi, rax ; malloc in 1ft param
	mov rdx, r8 ; s1 len
	call _ft_memcpy

	mov rdi, rax ; s1 in malloc ?
	pop rcx ; s2 len
	add rdi, r8 ; add offset of s1
	pop rsi ;retrieve s2
	mov rdx, rcx ; s2 len
	call _ft_memcpy

end:
	sub rax, r8
	sub rax, rcx ; goto start
	mov rsp, rbp
	pop rbp
	ret

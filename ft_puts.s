extern _ft_strlen
%define MAC_SYSCALL(sys)	0x2000000 | sys
%define WRITE				4
%define STDOUT				1

section .data
ascii:
.newline db 0xa

section .text
	global _ft_puts

_ft_puts:
	push rbp
	mov rbp, rsp
	cmp BYTE [rdi], 0x0
	je print_newline

loop:
	push rdi ; save rdi before call strlen
	call _ft_strlen
	pop rdi
	mov rbx, rax

print:
	mov rsi, rdi
	mov rdi, STDOUT
	mov rdx, rbx
	mov rax, MAC_SYSCALL(WRITE)
	syscall

print_newline:
	mov rdi, STDOUT
	lea rsi, [rel ascii.newline]
	mov rdx, 0x1
	mov rax, MAC_SYSCALL(WRITE)
	syscall
	inc rbx ; add nl to ret
	mov rax, rbx
	mov rsp, rbp
	pop rbp
	ret

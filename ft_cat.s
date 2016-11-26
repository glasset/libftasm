%define MAC_SYSCALL(sys)	0x2000000 | sys
%define READ				3
%define WRITE				4
%define STDOUT				1
%define BUF_SIZE			0x1024

section .text
	global _ft_cat

_ft_cat:
	push rbp
	mov rbp, rsp
	sub rsp, BUF_SIZE ; reserve BUFER

read:
	push rdi
	mov rsi, rsp
	mov rdx, BUF_SIZE
	mov rax, MAC_SYSCALL(READ)
	syscall
	jc end
	js end ; -1 error

write:
	mov rdi, STDOUT
	mov rdx, rax
	mov rax, MAC_SYSCALL(WRITE)
	syscall
	cmp rax, 0x0
	pop rdi
	jg read

end:
	add rsp, BUF_SIZE ; remove BUFER
	mov rsp, rbp
	pop rbp
	ret

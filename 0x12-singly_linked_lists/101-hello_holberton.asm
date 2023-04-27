;Description: An assembly code to printf

extern printf

section .data
	message db 'Hello, Holberton', 0
	format db "%s", 10, 0
section .text
	global main
main:
	push rbp

	mov rdi, format
	mov rsi, message
	mov rax, 0
	call printf

	pop rbp

	xor rax, rax
	ret

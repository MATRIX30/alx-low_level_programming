section .data
	txt db 'Hello, Holberton', 10, 0

section .text
	global main

main:
	push rbp
	mov rbp, rsp

	sub rsp, 16
	mov edi, txt
	mov eax, 0
	call printf

	add rsp, 16

	mov eax, 0
	pop rbp
	ret

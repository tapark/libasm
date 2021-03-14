section .text
	extern ___error
	golbal _ft_write

_ft_write :
	mov RAX, 0x2000004
	syscall
	jc error
	ret

error :
	push RAX
	call __error
	pop RDX
	mov [RAX], RDX
	mov RAX, -1
	ret
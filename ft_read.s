section .text
	extern ___error
	golbal _ft_read

_ft_read :
	mov RAX, 0x2000003
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
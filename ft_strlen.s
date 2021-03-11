section .text
	global _ft_strlen

_ft_strlen :
	mov RAX, 0
	jmp loop

loop :
	cmp BYTE[RDI + RAX], 0
	jne increase
	je end

increase :
	inc RAX
	jmp loop

end :
	ret
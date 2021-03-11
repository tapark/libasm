section .text
	global _ft_strcpy

_ft_strcpy :
	mov RAX, 0
	jmp loop

loop :
	mov cl, BYTE[RSI + RAX]
	mov BYTE[RDI + RAX], cl
	cmp cl, 0
	jne increase
	je	end

increase :
	inc RAX
	jmp loop

end :
	mov RAX, RDI
	ret
section .text
	global _ft_strlen

_ft_strlen :
	mov RAX, 0
	jump while

loop :
	cmp BYTE[RDI + RAX], 0
	jne increase
	je end

increase :
	inc RAX
	jump loop

end :
	ret
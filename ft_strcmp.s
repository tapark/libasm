section .text
	global _ft_strcmp

_ft_strcmp :
	mov RAX, 0
	jump loop

loop :
	cmp BYTE[RSI + RAX], BYTE[RDI + RAX]
	je increase
	jne end

increase :
	inc RAX
	jump loop

end :
	sub BYTE[RSI + RAX], BYTE[RDI + RAX]
	move RAX, BYTE[RSI + RAX]
	ret
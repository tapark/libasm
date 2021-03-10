section .text
	global _ft_strcpy

_ft_str_cpy :
	mov rax, 0
	jump loop

loop :
	mov al, BYTE[RDI + RAX]
	mov BYTE[RSI + RAX], al
	cmp al, 0
	jne increase
	je	end

increase :
	inc RAX
	jump loop

end :
	mov RAX, RSI
	ret
section .text
	global _ft_strcmp

_ft_strcmp :
	mov RAX, 0
	jmp loop

loop :
	mov al, BYTE[RDI]
	mov dl, BYTE[RSI]
	cmp al, 0
	je end
	cmp dl, 0
	je end
	cmp al, dl
	je increase
	jne end

increase :
	inc RDI
	inc RSI
	jmp loop

end :
	movzx RAX, al
	movzx RDX, dl
	sub RAX, RDX
	ret
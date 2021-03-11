section .text
	extern _ft_strlen
	extern _ft_strcpy
	extern _malloc
	global _ft_strdup

_ft_strdup :
	call _ft_strlen
	push RDI
	mov RDI, RAX
	inc RDI
	call _malloc
	cmp RAX, 0
	je error
	mov RDI, RAX
	pop RSI
	call _ft_strcpy
	jmp end

error :
	mov RAX, 0
	ret

end :
	ret
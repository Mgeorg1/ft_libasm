
section	.text
	global	_ft_strcpy

_ft_strcpy:
			xor rax, rax
			jmp loop

loop:
			cmp BYTE [rsi + rax], 0
			je exit
			mov cl, BYTE [rsi + rax]
			mov BYTE[rdi + rax], cl
			inc rax
			jmp loop

exit:
			mov rax, rdi
			ret

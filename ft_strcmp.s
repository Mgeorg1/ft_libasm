
section .text
	global _ft_strcmp

_ft_strcmp:
			xor rcx, rcx
			xor rax, rax
			jmp loop

loop:
			mov al, BYTE [rdi + rcx]
			mov bl, BYTE [rsi + rcx]
			cmp al, 0
			je exit
			cmp bl, 0
			je exit
			cmp al, bl
			jne exit
			inc rcx
			jmp loop


exit:

		movzx rdx, bl
		movzx rax, al
		sub rax, rdx
		ret
section .text
			extern ___error
			global _ft_strdup
			extern _malloc
			extern _ft_strlen
			extern _ft_strcpy
_ft_strdup:
			xor rax, rax
			push rdi
			call _ft_strlen
			mov rdi, rax
			inc rdi
			call _malloc
			cmp rax, 0
			je error
			pop rsi
			mov rdi, rax
			call _ft_strcpy
			ret

error:
			push rax
			call ___error
			pop qword[rax]
			mov rax, 0
			ret

SRCS	=	ft_strlen.s \
			ft_strcpy.s \
			ft_strcmp.s \

MAIN	=	main.c \

NAME	=	libasm.a

M_NAME	=	test

%.o: %.s
		nasm -f macho64 $<
OBJS	=	$(SRCS:.s=.o)

all: $(NAME)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)
			gcc -Wall -Wextra -Werror -I./libasm.h -o $(M_NAME) $(NAME) main.c

clean:		
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME) $(M_NAME)

re:			fclean all

.PHONY:		all re clean fclean
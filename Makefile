SRCS	=	ft_strlen.s \
			ft_strcpy.s \
			ft_strcmp.s \
			ft_read.s \
			ft_write.s \
			ft_strdup.s \

MAIN	=	main.c \

INC 	=	libasm.h \

NAME	=	libasm.a

M_NAME	=	test

%.o: %.s
		nasm -f macho64 $<
OBJS	=	$(SRCS:.s=.o)

all: $(NAME)

$(NAME):	$(OBJS) $(INC)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

test:	$(NAME) $(MAIN)
		gcc -Wall -Wextra -Werror -o $(M_NAME) $(NAME) $(MAIN)

clean:		
			rm -f $(OBJS) main.o

fclean:		clean
			rm -f $(NAME) $(M_NAME)

re:			fclean all

.PHONY:		all re clean fclean test
SRCS	= ./ft_strlen.s \
		  ./ft_strcpy.s \
		  ./ft_strcmp.s \
		  ./ft_strdup.s \

NAME	= libasm.a
OBJS	= $(SRCS:.s=.o)
RM		= rm -f
LIBC	= ar rc
NA		= nasm
NFLAGS	= -f macho64

.s.o :
	$(NA) $(NFLAGS) $<

$(NAME) : $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME) a.out

re : fclean all

test :
	gcc main.c -lasm -L.

SRCS	= ./ft_strlen.s \

NAME	= libasm.a
OBJS	= $(SRCS:.s=.o)
RM		= rm -f
LIBC	= ar rc
NA		= nasm
NFLAGS	= -f macho64

.s.o :
	$(NA) $(NFLAGS) $(SRCS)

$(NAME) : $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

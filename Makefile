$(NAME) = tmp

$(CC) = gcc
$(CFLAGS) = -Werror -Wextra -Wall

$(SRCS) = 
$(OBJS) = $(SRCS:.c=.o)

all = $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS)

%.o : $.c
	$(CC) $(CLFAG) -c -o $@ $<

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re

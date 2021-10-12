SRCS	= ./ft_lstmap.c ./ft_lstclear.c ./ft_lstdelone.c ./ft_lstiter.c ./ft_lstadd_back.c ./ft_lstlast.c ./ft_lstsize.c ./ft_lstadd_front.c ./ft_lstnew.c ./ft_itoa.c ./ft_striteri.c ./ft_strmapi.c ./ft_putnbr_fd.c ./ft_putendl_fd.c ./ft_putstr_fd.c ./ft_putchar_fd.c ./ft_atoi.c ./ft_bzero.c ./ft_calloc.c ./ft_memchr.c ./ft_memcmp.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_strchr.c ./ft_strdup.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_strlen.c ./ft_strncmp.c ./ft_strnstr.c ./ft_strrchr.c ./ft_tolower.c ./ft_toupper.c ./ft_split.c ./ft_strjoin.c ./ft_strtrim.c ./ft_substr.c ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c 

B_SRCS	= ./ft_Bonus/lstadd_back_bonus.c ./ft_Bonus/lstadd_front_bonus.c ./ft_Bonus/lstclear_bonus.c

OBJS	= $(SRCS:.c=.o)

B_OBJS	= $(B_SRCS:.c=.o)

HEADS	= libft.h

NAME	= libft.a

GCC	= gcc

FLAGS	= -Wall -Werror -Wextra

AR	= ar -rcs

RM	= rm -f

.c.o:
		$(GCC) $(FLAGS) -c $< ${<:.c}

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

all:	$(NAME)

bonus:	$(B_OBJS)
		$(AR) $(NAME) $(B_OBJS) -I $(HEADS)

clean:
		$(RM) $(OBJS) $(B_OBJS)

fclean: clean
		$(RM) $(NAME)

re:		fclean all
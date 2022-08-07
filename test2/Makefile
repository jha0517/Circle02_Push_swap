
NAME	= push_swap

SRCS	= ../libft/ft_atoi.c\
		  ../libft/ft_bzero.c\
		  ../libft/ft_calloc.c\
		  ../libft/ft_isalnum.c\
		  ../libft/ft_isalpha.c\
		  ../libft/ft_isdigit.c\
		  ../libft/ft_isprint.c\
		  ../libft/ft_itoa.c\
		  ../libft/ft_lstadd_back.c\
		  ../libft/ft_lstadd_front.c\
		  ../libft/ft_lstclear.c\
		  ../libft/ft_lstdelone.c\
		  ../libft/ft_lstiter.c\
		  ../libft/ft_lstlast.c\
		  ../libft/ft_lstmap.c\
		  ../libft/ft_lstnew.c\
		  ../libft/ft_lstsize.c\
		  ../libft/ft_memchr.c\
		  ../libft/ft_memcmp.c\
		  ../libft/ft_memcpy.c\
		  ../libft/ft_memset.c\
		  ../libft/ft_putchar_fd.c\
		  ../libft/ft_split.c\
		  ../libft/ft_strchr.c\
		  ../libft/ft_strdup.c\
		  ../libft/ft_striteri.c\
		  ../libft/ft_strjoin.c\
		  ../libft/ft_strlcat.c\
		  ../libft/ft_strlcp.c\
		  ../libft/ft_strlcpy.c\
		  ../libft/ft_strlen.c\
		  ../libft/ft_strmapi.c\
		  ../libft/ft_strncmp.c\
		  ../libft/ft_strnstr.c\
		  ../libft/ft_strrchr.c\
		  ../libft/ft_strtrim.c\
		  ../libft/ft_substr.c\
		  ../libft/ft_tolower.c\
		  ../libft/ft_toupper.c\
		  test2_errors.c \
		  test2_main.c \
		  test2_rules.c \
		  test2_show.c \

OBJS	= ${SRCS:.c=.o}

CC		= cc

CFLAGS	= 

${NAME}: 	${OBJS}
			${CC} -o ${NAME} ${OBJS} ${CFLAGS}

all: 		${NAME}

clean:
			rm -f ${OBJS} ${OBJS2}

fclean: 	clean
			rm -f ${NAME}

re: 		fclean all

.PHONY: all clean fclean re

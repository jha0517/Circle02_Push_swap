
NAME	= push_swap

SRCS	= ./libft/ft_atoi.c\
		  ./libft/ft_bzero.c\
		  ./libft/ft_calloc.c\
		  ./libft/ft_isalnum.c\
		  ./libft/ft_isalpha.c\
		  ./libft/ft_isdigit.c\
		  ./libft/ft_isprint.c\
		  ./libft/ft_itoa.c\
		  ./libft/ft_lstadd_back.c\
		  ./libft/ft_lstadd_front.c\
		  ./libft/ft_lstclear.c\
		  ./libft/ft_lstdelone.c\
		  ./libft/ft_lstiter.c\
		  ./libft/ft_lstlast.c\
		  ./libft/ft_lstmap.c\
		  ./libft/ft_lstnew.c\
		  ./libft/ft_lstsize.c\
		  ./libft/ft_memchr.c\
		  ./libft/ft_memcmp.c\
		  ./libft/ft_memcpy.c\
		  ./libft/ft_memset.c\
		  ./libft/ft_putchar_fd.c\
		  ./libft/ft_putstr_fd.c\
		  ./libft/ft_split.c\
		  ./libft/ft_strchr.c\
		  ./libft/ft_strdup.c\
		  ./libft/ft_striteri.c\
		  ./libft/ft_strjoin.c\
		  ./libft/ft_strlcat.c\
		  ./libft/ft_strlcp.c\
		  ./libft/ft_strlcpy.c\
		  ./libft/ft_strlen.c\
		  ./libft/ft_strmapi.c\
		  ./libft/ft_strncmp.c\
		  ./libft/ft_strnstr.c\
		  ./libft/ft_strrchr.c\
		  ./libft/ft_strtrim.c\
		  ./libft/ft_substr.c\
		  ./libft/ft_tolower.c\
		  ./libft/ft_toupper.c\
		  ./src/args_errors.c \
		  ./src/args_stock.c \
		  ./src/args_parsing.c \
		  ./src/main.c \
		  ./src/algo_lis.c \
		  ./src/algo_lis_pb.c \
		  ./src/algo_hard.c \
		  ./src/algo_solver.c \
		  ./src/rules_push_swap.c \
		  ./src/rules_rotate.c \
		  ./src/rules_rotate_utils.c \
		  ./src/cost_iterate.c \
		  ./src/cost_calcule.c \
		  ./src/tool_lst.c \
		  ./src/tool_math.c \
		  ./src/ft_sort_int_tab.c \

OBJS	= ${SRCS:.c=.o}

CC		= cc

CFLAGS	= -Wextra -Werror -Wall

${NAME}: 	${OBJS}
			${CC} -o ${NAME} ${OBJS} ${CFLAGS}

all: 		${NAME}

clean:
			rm -f ${OBJS} ${OBJS2}

fclean: 	clean
			rm -f ${NAME}

re: 		fclean all

.PHONY: all clean fclean re

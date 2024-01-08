#######################################

MAKEFLAGS = --silent

RM = rm -f

#######################################

SRCS =	Src/ft_isalpha.c \
		Src/ft_isdigit.c \
		Src/ft_isalnum.c \
		Src/ft_isprint.c \
		Src/ft_isascii.c \
		Src/ft_strlen.c \
		Src/ft_bzero.c \
		Src/ft_memset.c \
		Src/ft_memcpy.c \
		Src/ft_memmove.c \
		Src/ft_strlcpy.c \
		Src/ft_strlcat.c \
		Src/ft_toupper.c \
		Src/ft_tolower.c \
		Src/ft_strchr.c \
		Src/ft_strrchr.c \
		Src/ft_strncmp.c \
		Src/ft_memchr.c \
		Src/ft_memcmp.c \
		Src/ft_strnstr.c \
		Src/ft_atoi.c \
		Src/ft_calloc.c \
		Src/ft_strdup.c \
		Src/ft_substr.c \
		Src/ft_strjoin.c \
		Src/ft_strtrim.c \
		Src/ft_split.c \
		Src/ft_itoa.c \
		Src/ft_strmapi.c \
		Src/ft_striteri.c \
		Src/ft_putchar_fd.c \
		Src/ft_putstr_fd.c \
		Src/ft_putendl_fd.c \
		Src/ft_putnbr_fd.c \

SRCS_BONUS =	Src/ft_lstnew.c \
				Src/ft_lstadd_front.c \
				Src/ft_lstsize.c \
				Src/ft_lstlast.c \
				Src/ft_lstadd_back.c \
				Src/ft_lstdelone.c \
				Src/ft_lstclear.c \
				Src/ft_lstiter.c \
				Src/ft_lstmap.c \

#######################################

OBJS = ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

#######################################

NAME = libft.a

#######################################

${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}

bonus : ${OBJS_BONUS}
	ar rcs ${NAME} ${OBJS_BONUS}
	echo "Creating Library Bonus !"

all : ${NAME}
	echo "Creating Library !"

clean :
	${RM} ${OBJS} ${OBJS_BONUS}
	echo "Delete Objects !"

fclean : clean
	${RM} ${NAME}
	echo "Delete Library !"

re : fclean all

#######################################
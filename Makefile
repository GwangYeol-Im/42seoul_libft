AR := ar
ARFLAGS := rcs
CC := gcc
CFLAGS := -Wall -Wextra -Werror

TARGET := libft.a

INC := libft.h

SRCS := ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_toupper.c

OBJS := ${SRCS:c=o}

all : ${TARGET}

clean :
		rm -f ${OBJS}

fclean :
		rm -f ${TARGET}

re : fclean all

${TARGET} : ${INC} ${OBJS}
		${AR} ${ARFLAGS} $@ $^

%.o : %.c Makefile
		${CC} ${CFLAGS} -c $<


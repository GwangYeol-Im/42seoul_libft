AR := ar
ARFLAGS := rcs
CC := gcc
CFLAGS := -Wall -Wextra -Werror

TARGET := libft.a

INC := libft.h

SRCS_DIR = ./
SRCS := ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memcmp.c \
		ft_memchr.c \

OBJS := ${addprefix ${SRCS_DIR}, ${SRCS:c=o}}

all : ${TARGET}

clean :
		rm -f ${OBJS}

fclean :
		rm -f ${TARGET}

re : clean all

${TARGET} : ${INC} ${OBJS}
		${AR} ${ARFLAGS} $@ $^

%.o : %.c Makefile
		${CC} ${CFLAGS} -c $<


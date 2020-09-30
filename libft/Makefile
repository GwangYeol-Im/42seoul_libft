AR := ar
ARFLAGS := rcs
CC := gcc
CFLAGS := -Wall -Wextra -Werror

NAME := libft.a

INC := libft.h

SRCS_DIR = ./
SRCS2_DIR = ./
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
		ft_memmove.c \
		ft_bzero.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_strdup.c \
		ft_calloc.c \

SRCS2 := ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \

OBJS := $(addprefix $(SRCS_DIR), $(SRCS:c=o))
OBJS2 := $(addprefix $(SRCS2_DIR), $(SRCS2:c=o))

all : $(NAME)

clean :
		rm -f $(OBJS) $(OBJS2)

fclean : clean
		rm -f $(NAME)

re : fclean all

$(NAME) : $(INC) $(OBJS) $(OBJS2)
		$(AR) $(ARFLAGS) $@ $^

%.o : %.c Makefile
		$(CC) $(CFLAGS) -c $<


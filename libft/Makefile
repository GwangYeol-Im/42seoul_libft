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
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

SRCS_B := ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

OBJS := $(addprefix $(SRCS_DIR), $(SRCS:c=o))
OBJS_B := $(addprefix $(SRCS2_DIR), $(SRCS_B:c=o))

all : $(NAME)

clean :
		rm -f $(OBJS) $(OBJS_B)

fclean : clean
		rm -f $(NAME)

re : fclean all

bonus : $(OBJS_B)
		$(AR) $(NAME) $^

$(NAME) : $(INC) $(OBJS)
		$(AR) $(ARFLAGS) $@ $^

%.o : %.c Makefile
		$(CC) $(CFLAGS) -c $<


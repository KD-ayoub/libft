NAME=libft.a
cc = gcc
flags = -Wall -Wextra -Werror
BONUS_SRC = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c
src = ft_atoi.c \
	ft_isalnum.c \
	ft_isdigit.c \
	ft_memcmp.c \
	ft_memset.c \
	ft_strjoin.c \
	ft_strlen.c \
	ft_strrchr.c \
	ft_toupper.c \
	ft_bzero.c \
	ft_isalpha.c \
	ft_isprint.c \
	ft_memcpy.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strncmp.c \
	ft_substr.c \
	ft_calloc.c \
	ft_isascii.c \
	ft_memchr.c \
	ft_memmove.c \
	ft_strdup.c \
	ft_strlcpy.c \
	ft_strnstr.c \
	ft_tolower.c \
	ft_strtrim.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_split.c 

obj = $(src:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

bonus : $(NAME) $(obj) $(BONUS_OBJ)
	ar -rc $(NAME) $(obj) $(BONUS_OBJ)

$(NAME) : $(obj)
	ar -rc $(NAME) $(obj)
%.o : %.c libft.h
	$(cc) $(flags) -o $@ -c $< 
clean:
	rm -rf $(obj) $(BONUS_OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY : all clean fclean re bonus

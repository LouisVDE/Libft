NAME = libft.a
 
SRCS = ft_strlen.c		\
	   ft_isalpha.c		\
	   ft_isdigit.c		\
	   ft_isalnum.c		\
	   ft_isascii.c		\
	   ft_isprint.c		\
	   ft_strncmp.c		\
	   ft_strlcat.c		\
	   ft_strlcpy.c		\
	   ft_strnstr.c		\
	   ft_atoi.c		\
	   ft_strdup.c		\
	   ft_strchr.c		\
	   ft_strrchr.c		\
	   ft_memset.c		\
	   ft_bzero.c		\
	   ft_memcpy.c		\
	   ft_memmove.c		\
	   ft_toupper.c		\
	   ft_tolower.c		\
	   ft_memchr.c		\
	   ft_memcmp.c		\
	   ft_calloc.c		\
	   ft_putchar_fd.c	\
	   ft_putstr_fd.c	\
	   ft_putendl_fd.c	\
	   ft_putnbr_fd.c	\
	   ft_substr.c		\
	   ft_strmapi.c		\
	   ft_strjoin.c		\
	   ft_strtrim.c		\
	   ft_striteri.c	\
	   ft_split.c		\
	   ft_itoa.c

SRCS_BONUS = ft_lstnew_bonus.c	\
	   ft_lstadd_front_bonus.c	\
	   ft_lstsize_bonus.c		\
	   ft_lstlast_bonus.c		\
	   ft_lstadd_back_bonus.c	\
	   ft_lstdelone_bonus.c		\
	   ft_lstclear_bonus.c		\
	   ft_lstiter_bonus.c		\
	   ft_lstmap_bonus.c		\

OBJ = $(SRCS:.c=.o)

OBJ_BONUS = $(SRCS_BONUS:.c=.o)

AR = ar -rc

CFLAGS = -Wall -Wextra -Werror

CC = cc

RM = rm -f

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

bonus: $(OBJ) $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean 
	$(RM) $(NAME)

re :    fclean $(NAME) 

.PHONY: all clean fclean re bonus
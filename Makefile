NAME = libft.a
NAMEPROG = a.out

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f



FILES = ft_strrchr \
			ft_atoi \
			ft_bzero \
			ft_isalnum \
			ft_isalpha \
			ft_isdigit \
			ft_isascii \
			ft_isprint \
			ft_memchr \
			ft_memcmp \
			ft_memcpy \
			ft_memmove \
			ft_memset \
			ft_strlen \
			ft_strlcpy \
			ft_strlcat \
			ft_strncmp \
			ft_strrchr \
			ft_tolower \
			ft_toupper \
			ft_strnstr \
			ft_calloc \
			ft_strdup \
			ft_strjoin \
			ft_putnbr_fd \
			ft_putchar_fd \
			ft_putstr_fd \
			ft_putendl_fd \
			ft_strtrim \
			ft_strmapi \
			ft_substr \
			ft_strchr \
			ft_itoa \
			ft_split \
			ft_striteri \

FILES_B = ft_lstsize \
			ft_lstnew \
			ft_lstadd_front \
			ft_lstlast \
			ft_lstadd_back \
			ft_lstiter \
			ft_lstclear \
			ft_lstdelone \
			ft_lstmap \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))


.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -I./ -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus: $(OBJS_B)
	$(AR) $(NAME) $^

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)


re: clean all

.PHONY: bonus all clean fclean re
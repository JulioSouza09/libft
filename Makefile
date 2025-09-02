# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcesar-s <jcesar-s@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/05 18:52:06 by jcesar-s          #+#    #+#              #
#    Updated: 2025/09/02 17:27:33 by jcesar-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
NAME = libft.a
PRINTF_DIR=ft_printf
CFILES = ft_memset.c ft_strlen.c ft_bzero.c ft_memcpy.c ft_strncmp.c 
CFILES += ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
CFILES += ft_atoi.c ft_memcmp.c ft_strchr.c ft_strrchr.c ft_tolower.c
CFILES += ft_toupper.c ft_memmove.c ft_strnstr.c ft_strlcpy.c ft_memchr.c
CFILES += ft_strlcat.c ft_strdup.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c
CFILES += ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strjoin.c ft_substr.c
CFILES += ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c count_words.c
CFILES += get_next_line/get_next_line.c get_next_line/get_next_line_utils.c
CFILES += ft_printf/ft_printf.c  ft_printf/ft_putchar.c  ft_printf/ft_putnbr.c
CFILES += ft_printf/ft_putnbr_hex.c  ft_printf/ft_putnbr_u.c  ft_printf/ft_putptr.c
CFILES += ft_printf/ft_putstr.c
CFILES += ft_printf_err/ft_printf_err.c ft_printf_err/ft_putchar.c 
CFILES += ft_printf_err/ft_putnbr_hex.c ft_printf_err/ft_putnbr_u.c
CFILES += ft_printf_err/ft_putstr.c ft_printf_err/ft_putnbr.c
CFILES += ft_printf_err/ft_putptr.c
BFILES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c
BFILES += ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c
BFILES += ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
BOBJS = $(BFILES:.c=.o)
OBJS = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(PRINTF_DIR)
	ar rcs $(NAME) $(OBJS) 

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJS) $(BOBJS)

fclean: clean
	$(MAKE) fclean -C $(PRINTF_DIR)
	rm -f $(NAME)

re: fclean all

bonus: all $(BOBJS)
	ar rcs $(NAME) $(BOBJS)

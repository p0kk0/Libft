# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: felsanch <felsanch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 17:11:55 by felsanch          #+#    #+#              #
#    Updated: 2023/04/20 17:04:01 by felsanch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
		ft_strtrim.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		ft_split.c 
		
SRCBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c
OBJ = $(SRC:.c=.o)

OBJBONUS = $(SRCBONUS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)
	
	
clean:
	rm -f $(OBJ)
	rm -f $(OBJBONUS)

fclean: clean
	rm -f $(NAME)
	
re:
	fclean all
	
bonus: $(OBJBONUS)
	ar -rcs $(NAME) $(OBJBONUS)
	

.PHONY: NAME all clean fclean re bonus
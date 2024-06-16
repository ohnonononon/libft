# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nimatura <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 19:40:38 by nimatura          #+#    #+#              #
#    Updated: 2024/06/13 19:55:50 by nimatura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del programa
NAME = libft.a
HBONUS = .bonus

# Flags al compilar
FLAGS = -Wall -Wextra -Werror -I./

# Sources files
SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		   ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcat.c \
		   ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strchr.c \
		   ft_strrchr.c ft_strncmp.c ft_memcmp.c ft_memchr.c ft_strnstr.c \
		   ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		   ft_strtrim.c ft_split.c ft_itoa.c ft_striteri.c ft_strmapi.c \
		   ft_putstr_fd.c ft_putendl_fd.c ft_putchar_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		   ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		   ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ_BONUS = $(BONUS:.c=.o)

OBJ_FILE = $(SRC:.c=.o)

INC = libft.h

# Flags for linking
LNK = ar rc

#### Compilacion del programa ####

all: $(NAME)

bonus: $(HBONUS)
	@touch $(HBONUS)

$(HBONUS): $(OBJ_FILE) $(OBJ_BONUS)
	@$(LNK) $(NAME) $^

$(NAME): $(OBJ_FILE)
	@$(LNK) $@ $^ 

%.o: %.c $(INC) Makefile
	@gcc $(FLAGS) -c $< -o $@

fclean: clean
	@rm -rf $(NAME) 

clean:
	@rm -rf $(OBJ_FILE) $(OBJ_BONUS)
	@rm -rf .bonus

re: fclean all

.PHONY: all clean fclean re

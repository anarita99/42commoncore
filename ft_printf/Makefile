# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/24 11:10:10 by adores            #+#    #+#              #
#    Updated: 2025/05/01 15:19:51 by adores           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

CC := cc

SRC := ft_handleformat.c ft_hexaputnbr.c ft_printchar.c ft_printf.c \
	ft_printnbr.c ft_unsputnbr.c

CFLAGS := -Wall -Wextra -Werror

OBJ := $(SRC:.c=.o)

INC := ft_printf.h

RM := rm -f

AR := ar -rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< -I $(INC)

clean:
	(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
	

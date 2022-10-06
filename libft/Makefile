# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ealsomah <ealsomah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/11 20:00:22 by ealsomah          #+#    #+#              #
#    Updated: 2022/09/11 20:00:25 by ealsomah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${BONUS:.c=.o}

RM		= rm -f

GCCF = gcc -Wall -Wextra -Werror

LIB = ar -rcs

SRCS = ft_isdigit.c ft_split.c ft_strcmp.c ft_strjoin.c ft_strlen.c


$(NAME): ${OBJS}
		@${LIB} ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all


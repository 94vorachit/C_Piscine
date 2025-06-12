# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/10 15:47:06 by vorhansa          #+#    #+#              #
#    Updated: 2025/06/11 12:24:22 by vorhansa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
# NAME receives the static library file
HEADER = ./includes/ft.h
SRCS = 	srcs/ft_putchar.c\
		 srcs/ft_swap.c\
		 srcs/ft_putstr.c\
		 srcs/ft_strlen.c\
		 srcs/ft_strcmp.c
# SRCS has the list of font files that will be compiled		
OBJS = ${SRCS:.c=.o}
# Objs receives the same values as SRCs only exchanges .c for .o
CC = gcc
# CC receives the type of GCC compilation
RM = rm -f
# RM receives the command to delete with the -f flag that removes without asking
CFLAGS = -Wall -Wextra -Werror
# CFLAGS receive compilation flags
.c.o:
				${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}
# defines a rule to compile
# -I includes that the headers are in the Include folder
# -c $ < -$ {<:. c = .O} specifies how the source file will be generated
${NAME}: ${OBJS}
				ar rcs ${NAME} ${OBJS}
# $(NAME): ${OBJS}generates the Library Static from Objs
# ar rcs ${NAME} ${OBJS} Creates the Static Library
all:	${NAME}
# When makefile is called without arguments
clean:
				${RM} ${OBJS}
# defines the rule to clean. Erases the .o files.
fclean: clean	
				${RM} ${NAME}
# Erases the same files of Clean snd the Static Library				
re:				fclean all
# clean all files and create them again
.PHONY: all clean fclean re
# informs MakeFile that whenever these rules are called they need to be executed
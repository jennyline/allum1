##
## Makefile for allum1 in /home/fillin_j//allum1
## 
## Made by jennifer fillinger
## Login   <fillin_j@epitech.net>
## 
## Started on  Fri Jan 20 14:57:48 2012 jennifer fillinger
## Last update Sun Feb 12 15:35:49 2012 jennifer fillinger
##

CC =		gcc

RM =		rm -f

NAME =		allum1

SRCS =		aff.c \
		chest.c \
		main.c \
		player.c \
		ia.c \
		get_next_line.c \
		my_atoi.c \
		line.c \
		rules.c

OBJS =		$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME)

clean:		
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
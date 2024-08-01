##
## EPITECH PROJECT, 2023
## print
## File description:
## f
##

NAME	=	my_paint

SRCS	=	lib/my_put_nbr_base.c	\
			lib/my_printf.c	\
			lib/my_put_nbr.c	\
			lib/my_putchar.c	\
			lib/my_strlen.c	\
			lib/my_putstr.c	\
			lib/my_getnbr.c	\
			lib/my_strcmp.c	\
			lib/my_strncmp.c	\
			lib/my_strcpy.c	\
			lib/my_strcat.c	\
			lib/my_strdup.c	\
			src/draw/add_el_in_array.c	\
			src/draw/add_next_line.c	\
			src/analyse_event.c	\
			src/draw/create_line.c	\
			src/draw/draw_lines.c	\
			src/draw/remove_last_line.c	\
			src/main.c	\
			src/menu/draw.c	\
			src/menu/events.c	\
			src/menu/init_app.c	\
			src/menu/init_edit_menu.c	\
			src/menu/init_file_menu.c	\
			src/menu/init_help_menu.c	\
			src/menu/init_palette_rectangle.c	\
			src/menu/init_separator_lines.c	\

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS) -lcsfml-graphics -lcsfml-window -lcsfml-system -lm

clean:
	rm -f $(OBJS)
	rm -f *~
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

makeandclean:	all
				rm -f $(OBJS)
				rm -f *~
				rm -f *.o

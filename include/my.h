/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** header
*/

#include <SFML/Graphics.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector3.h>
#include <SFML/System.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#pragma once

typedef struct lines {
    sfVertexArray *array;
    struct lines *next;
    sfVector2f lastPoint;
} lines_t;

typedef struct object {
    int mouse_state;
    int selected_color;
    lines_t *lines;
    sfColor *colors;
} object_t;

typedef struct {
    sfVideoMode mode;
    sfRenderWindow *window;
    sfRectangleShape *fileButton;
    sfRectangleShape *editButton;
    sfRectangleShape *helpButton;
    sfRectangleShape *separatorLine1;
    sfRectangleShape *separatorLine2;
    sfRectangleShape *colorPalette;
    sfRectangleShape *colorSquares[8];
    sfRectangleShape *fileMenuItems[3];
    sfRectangleShape *Palette;
    sfText *fileMenuItemTexts[3];
    sfRectangleShape *editMenuItems[2];
    sfText *editMenuItemTexts[2];
    sfRectangleShape *helpMenuItems[2];
    sfText *helpMenuItemTexts[2];
    sfEvent event;
    sfFont *font;
    sfText *fileText;
    sfText *editText;
    sfText *helpText;
    sfBool fileMenuOpen;
    sfBool editMenuOpen;
    sfBool helpMenuOpen;
    sfBool colorPaletteOpen;
} App;

void my_putchar(char c);
int my_put_nbr(int nb);
int my_strlen(char const *str);
int my_putstr(char const *str);
void my_put_nbr_base(int nbr, char const *base);
void my_printf(char const *format, ...);
char *my_strdup(char const *src);
int my_getnbr(char const *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strcat(char *dest, char const *src);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strdup(char const *src);
void analyse_events(sfRenderWindow *win, sfEvent event, object_t *obj);
void remove_last_line(object_t *obj);
void draw_lines(object_t *obj, sfRenderWindow *window);
lines_t *create_line(void);
void add_el_in_array(object_t *obj, sfVector2f point, float thickness);
void add_next_line(object_t *obj);
void init_edit_button(App *app);
void init_file_button(App *app);
void init_help_button(App *app);
void init_color_squares(App *app);
void init_palette_rectangle(App *app);
void init_separator_lines(App *app);
void init_app(App *app);
void draw(App *app);
void handle_event(App *app, sfEvent *event, object_t *obj);
void create_edit_menu_items_graphics(App *app);
void add_edit_menu_items_text(App *app);
void create_file_menu_items_graphics(App *app);
void add_file_menu_items_text(App *app);
void create_help_menu_items_graphics(App *app);
void add_help_menu_items_text(App *app);
void create_color_squares_graphics(App *app);
void set_color_squares_colors(App *app);

/*
** EPITECH PROJECT, 2022
** B-MUL-100-MPL-1-1-myradar-edgar.maurel
** File description:
** main.c
*/

#include "../../include/my.h"

void init_all_buttons(App *app)
{
    init_file_button(app);
    init_palette_rectangle(app);
    create_file_menu_items_graphics(app);
    add_file_menu_items_text(app);
    init_edit_button(app);
    init_help_button(app);
    init_separator_lines(app);
    create_edit_menu_items_graphics(app);
    add_edit_menu_items_text(app);
    create_help_menu_items_graphics(app);
    add_help_menu_items_text(app);
    create_color_squares_graphics(app);
    set_color_squares_colors(app);
}

void init_app(App *app)
{
    app->mode = (sfVideoMode){800, 600, 32};
    app->window = sfRenderWindow_create
    (app->mode, "My Paint", sfResize | sfClose, NULL);
    app->fileButton = sfRectangleShape_create();
    app->editButton = sfRectangleShape_create();
    app->helpButton = sfRectangleShape_create();
    app->separatorLine1 = sfRectangleShape_create();
    app->separatorLine2 = sfRectangleShape_create();
    app->font = sfFont_createFromFile("src/menu/arial.ttf");
    app->fileText = sfText_create();
    app->editText = sfText_create();
    app->helpText = sfText_create();
    app->fileMenuOpen = false;
    app->editMenuOpen = false;
    app->helpMenuOpen = false;
    init_all_buttons(app);
}

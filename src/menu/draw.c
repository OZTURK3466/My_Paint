/*
** EPITECH PROJECT, 2022
** B-MUL-100-MPL-1-1-myradar-edgar.maurel
** File description:
** main.c
*/

#include "../../include/my.h"

void draw_edit_menu(App *app)
{
    for (int i = 0; i < 2; i++) {
        sfRenderWindow_drawRectangleShape
        (app->window, app->editMenuItems[i], NULL);
        sfRenderWindow_drawText
        (app->window, app->editMenuItemTexts[i], NULL);
    }
}

void draw_file_menu(App *app)
{
    for (int i = 0; i < 3; i++) {
        sfRenderWindow_drawRectangleShape
        (app->window, app->fileMenuItems[i], NULL);
        sfRenderWindow_drawText
        (app->window, app->fileMenuItemTexts[i], NULL);
    }
}

void draw_help_menu(App *app)
{
    for (int i = 0; i < 2; i++) {
        sfRenderWindow_drawRectangleShape
        (app->window, app->helpMenuItems[i], NULL);
        sfRenderWindow_drawText
        (app->window, app->helpMenuItemTexts[i], NULL);
    }
}

void draw_color_palette(App *app)
{
    for (int i = 0; i < 8; i++) {
        sfRenderWindow_drawRectangleShape
        (app->window, app->colorSquares[i], NULL);
    }
}

void draw(App *app)
{
    sfRenderWindow_drawRectangleShape(app->window, app->fileButton, NULL);
    sfRenderWindow_drawText(app->window, app->fileText, NULL);
    sfRenderWindow_drawRectangleShape(app->window, app->editButton, NULL);
    sfRenderWindow_drawText(app->window, app->editText, NULL);
    sfRenderWindow_drawRectangleShape(app->window, app->helpButton, NULL);
    sfRenderWindow_drawText(app->window, app->helpText, NULL);
    sfRenderWindow_drawRectangleShape(app->window, app->separatorLine1, NULL);
    sfRenderWindow_drawRectangleShape(app->window, app->separatorLine2, NULL);
    sfRenderWindow_drawRectangleShape(app->window, app->Palette, NULL);
    if (app->colorPaletteOpen)
        draw_color_palette(app);
    if (app->fileMenuOpen)
        draw_file_menu(app);
    if (app->editMenuOpen)
        draw_edit_menu(app);
    if (app->helpMenuOpen)
        draw_help_menu(app);
}

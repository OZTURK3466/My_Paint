/*
** EPITECH PROJECT, 2022
** B-MUL-100-MPL-1-1-myradar-edgar.maurel
** File description:
** main.c
*/

#include "../../include/my.h"

void init_palette_rectangle(App *app)
{
    sfVector2f pos = {10, 40};
    sfVector2f size = {200, 550};

    app->Palette = sfRectangleShape_create();
    sfRectangleShape_setPosition(app->Palette, pos);
    sfRectangleShape_setSize(app->Palette, size);
    sfRectangleShape_setFillColor
    (app->Palette, sfColor_fromRGB(246, 244, 244));
}

void create_color_squares_graphics(App *app)
{
    sfVector2f squareSize = {40, 40};
    sfVector2f pos;

    for (int i = 0; i < 8; i++) {
        app->colorSquares[i] = sfRectangleShape_create();
        pos.x = 20;
        pos.y = 50 + i * 30 + i * 40;
        sfRectangleShape_setPosition(app->colorSquares[i], pos);
        sfRectangleShape_setSize(app->colorSquares[i], squareSize);
    }
}

void set_color_squares_colors(App *app)
{
    sfColor colors[8] = {sfRed, sfGreen, sfBlue,
    sfYellow, sfMagenta, sfCyan, sfBlack, sfWhite};

    for (int i = 0; i < 8; i++) {
        if (i < 8) {
            sfRectangleShape_setFillColor(app->colorSquares[i], colors[i]);
        }
    }
}

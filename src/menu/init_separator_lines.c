/*
** EPITECH PROJECT, 2022
** B-MUL-100-MPL-1-1-myradar-edgar.maurel
** File description:
** main.c
*/

#include "../../include/my.h"

void init_separator_lines(App *app)
{
    sfVector2f size = {1, 30};
    sfVector2f separatorLine1Pos = {200, 0};
    sfVector2f separatorLine2Pos = {2 * 200, 0};

    sfRectangleShape_setPosition(app->separatorLine1, separatorLine1Pos);
    sfRectangleShape_setSize(app->separatorLine1, size);
    sfRectangleShape_setFillColor(app->separatorLine1, sfWhite);
    sfRectangleShape_setPosition(app->separatorLine2, separatorLine2Pos);
    sfRectangleShape_setSize(app->separatorLine2, size);
    sfRectangleShape_setFillColor(app->separatorLine2, sfWhite);
}

/*
** EPITECH PROJECT, 2022
** B-MUL-100-MPL-1-1-myradar-edgar.maurel
** File description:
** main.c
*/

#include "../../include/my.h"

void init_help_button(App *app)
{
    sfVector2f pos = {2 * 200, 0};
    sfVector2f size = {200, 30};
    sfFloatRect textBounds;
    sfVector2f textPos;

    sfRectangleShape_setPosition(app->helpButton, pos);
    sfRectangleShape_setSize(app->helpButton, size);
    sfRectangleShape_setFillColor
    (app->helpButton, sfColor_fromRGB(200, 200, 200));
    sfText_setString(app->helpText, "Help");
    sfText_setFont(app->helpText, app->font);
    sfText_setCharacterSize(app->helpText, 15);
    sfText_setFillColor(app->helpText, sfBlack);
    textBounds = sfText_getGlobalBounds(app->helpText);
    textPos.x = pos.x + (size.x - textBounds.width) / 2;
    textPos.y = pos.y + (size.y - textBounds.height) / 2;
    sfText_setPosition(app->helpText, textPos);
}

void create_help_menu_items_graphics(App *app)
{
    sfVector2f buttonSize = {200, 30};
    sfVector2f pos;

    for (int i = 0; i < 2; i++) {
        app->helpMenuItems[i] = sfRectangleShape_create();
        pos.x = 400;
        pos.y = (i + 1) * 30;
        sfRectangleShape_setPosition(app->helpMenuItems[i], pos);
        sfRectangleShape_setSize(app->helpMenuItems[i], buttonSize);
        sfRectangleShape_setFillColor
        (app->helpMenuItems[i], sfColor_fromRGB(200, 200, 200));
    }
}

void add_help_menu_items_text(App *app)
{
    sfVector2f textPos;

    for (int i = 0; i < 2; i++) {
        app->helpMenuItemTexts[i] = sfText_create();
        sfText_setFont(app->helpMenuItemTexts[i], app->font);
        sfText_setCharacterSize(app->helpMenuItemTexts[i], 15);
        sfText_setFillColor(app->helpMenuItemTexts[i], sfBlack);
        textPos.x = sfRectangleShape_getPosition(app->helpMenuItems[i]).x + 10;
        textPos.y = sfRectangleShape_getPosition(app->helpMenuItems[i]).y +
        (sfRectangleShape_getSize(app->helpMenuItems[i]).y -
        sfText_getCharacterSize(app->helpMenuItemTexts[i])) / 2;
        sfText_setPosition(app->helpMenuItemTexts[i], textPos);
    }
    sfText_setString(app->helpMenuItemTexts[0], "About");
    sfText_setString(app->helpMenuItemTexts[1], "Help");
}

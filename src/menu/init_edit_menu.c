/*
** EPITECH PROJECT, 2022
** B-MUL-100-MPL-1-1-myradar-edgar.maurel
** File description:
** main.c
*/

#include "../../include/my.h"

void init_edit_button(App *app)
{
    sfVector2f pos = {200, 0};
    sfVector2f size = {200, 30};
    sfFloatRect textBounds;
    sfVector2f textPos;

    sfRectangleShape_setPosition(app->editButton, pos);
    sfRectangleShape_setSize(app->editButton, size);
    sfRectangleShape_setFillColor
    (app->editButton, sfColor_fromRGB(200, 200, 200));
    sfText_setString(app->editText, "Edit");
    sfText_setFont(app->editText, app->font);
    sfText_setCharacterSize(app->editText, 15);
    sfText_setFillColor(app->editText, sfBlack);
    textBounds = sfText_getGlobalBounds(app->editText);
    textPos.x = pos.x + (size.x - textBounds.width) / 2;
    textPos.y = pos.y + (size.y - textBounds.height) / 2;
    sfText_setPosition(app->editText, textPos);
}

void create_edit_menu_items_graphics(App *app)
{
    sfVector2f buttonSize = {200, 30};
    sfVector2f pos;

    for (int i = 0; i < 2; i++) {
        app->editMenuItems[i] = sfRectangleShape_create();
        pos.x = 200;
        pos.y = (i + 1) * 30;
        sfRectangleShape_setPosition(app->editMenuItems[i], pos);
        sfRectangleShape_setSize(app->editMenuItems[i], buttonSize);
        sfRectangleShape_setFillColor
        (app->editMenuItems[i], sfColor_fromRGB(200, 200, 200));
    }
}

void add_edit_menu_items_text(App *app)
{
    sfVector2f textPos;

    for (int i = 0; i < 2; i++) {
        app->editMenuItemTexts[i] = sfText_create();
        sfText_setFont(app->editMenuItemTexts[i], app->font);
        sfText_setCharacterSize(app->editMenuItemTexts[i], 15);
        sfText_setFillColor(app->editMenuItemTexts[i], sfBlack);
        textPos.x = sfRectangleShape_getPosition(app->editMenuItems[i]).x + 10;
        textPos.y = sfRectangleShape_getPosition(app->editMenuItems[i]).y +
        (sfRectangleShape_getSize(app->editMenuItems[i]).y -
        sfText_getCharacterSize(app->editMenuItemTexts[i])) / 2;
        sfText_setPosition(app->editMenuItemTexts[i], textPos);
    }
    sfText_setString(app->editMenuItemTexts[0], "Pencil");
    sfText_setString(app->editMenuItemTexts[1], "Eraser");
}

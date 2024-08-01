/*
** EPITECH PROJECT, 2022
** B-MUL-100-MPL-1-1-myradar-edgar.maurel
** File description:
** main.c
*/

#include "../../include/my.h"

void init_file_button(App *app)
{
    sfVector2f pos = {0, 0};
    sfVector2f size = {200, 30};
    sfFloatRect textBounds;
    sfVector2f textPos;

    sfRectangleShape_setPosition(app->fileButton, pos);
    sfRectangleShape_setSize(app->fileButton, size);
    sfRectangleShape_setFillColor
    (app->fileButton, sfColor_fromRGB(200, 200, 200));
    sfText_setString(app->fileText, "File");
    sfText_setFont(app->fileText, app->font);
    sfText_setCharacterSize(app->fileText, 15);
    sfText_setFillColor(app->fileText, sfBlack);
    textBounds = sfText_getGlobalBounds(app->fileText);
    textPos.x = pos.x + (size.x - textBounds.width) / 2;
    textPos.y = pos.y + (size.y - textBounds.height) / 2;
    sfText_setPosition(app->fileText, textPos);
}

void create_file_menu_items_graphics(App *app)
{
    sfVector2f buttonSize = {200, 30};
    sfVector2f pos;

    for (int i = 0; i < 3; i++) {
        app->fileMenuItems[i] = sfRectangleShape_create();
        pos.x = 0;
        pos.y = (i + 1) * 30;
        sfRectangleShape_setPosition(app->fileMenuItems[i], pos);
        sfRectangleShape_setSize(app->fileMenuItems[i], buttonSize);
        sfRectangleShape_setFillColor
        (app->fileMenuItems[i], sfColor_fromRGB(200, 200, 200));
    }
}

void add_file_menu_items_text(App *app)
{
    sfVector2f textPos;

    for (int i = 0; i < 3; i++) {
        app->fileMenuItemTexts[i] = sfText_create();
        sfText_setFont(app->fileMenuItemTexts[i], app->font);
        sfText_setCharacterSize(app->fileMenuItemTexts[i], 15);
        sfText_setFillColor(app->fileMenuItemTexts[i], sfBlack);
        textPos.x = sfRectangleShape_getPosition(app->fileMenuItems[i]).x + 10;
        textPos.y = sfRectangleShape_getPosition(app->fileMenuItems[i]).y +
        (sfRectangleShape_getSize(app->fileMenuItems[i]).y -
        sfText_getCharacterSize(app->fileMenuItemTexts[i])) / 2;
        sfText_setPosition(app->fileMenuItemTexts[i], textPos);
    }
    sfText_setString(app->fileMenuItemTexts[0], "New File");
    sfText_setString(app->fileMenuItemTexts[1], "Open File");
    sfText_setString(app->fileMenuItemTexts[2], "Save File");
}

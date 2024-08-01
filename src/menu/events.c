/*
** EPITECH PROJECT, 2022
** B-MUL-100-MPL-1-1-myradar-edgar.maurel
** File description:
** main.c
*/

#include "../../include/my.h"

void handle_color_selection(App *app, object_t *obj,
    sfMouseButtonEvent mouseButton)
{
    sfFloatRect colorBounds;
    sfVector2i mousePos;

    for (int i = 0; i < 8; i++) {
        colorBounds = sfRectangleShape_getGlobalBounds(app->colorSquares[i]);
        mousePos = sfMouse_getPositionRenderWindow(app->window);
        if (mouseButton.button == sfMouseLeft &&
            sfFloatRect_contains(&colorBounds, mousePos.x, mousePos.y)){
            obj->selected_color = i;
            }
    }
}

void handle_main_buttons_clicked(App *app, sfMouseButtonEvent mouseButton)
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(app->window);
    sfFloatRect fileButtonBounds = sfRectangleShape_getGlobalBounds
    (app->fileButton);
    sfFloatRect editButtonBounds = sfRectangleShape_getGlobalBounds
    (app->editButton);
    sfFloatRect helpButtonBounds = sfRectangleShape_getGlobalBounds
    (app->helpButton);

    if (mouseButton.button == sfMouseLeft) {
        if (sfFloatRect_contains(&fileButtonBounds, mousePos.x, mousePos.y))
            app->fileMenuOpen = !app->fileMenuOpen;
        if (sfFloatRect_contains(&editButtonBounds, mousePos.x, mousePos.y))
            app->editMenuOpen = !app->editMenuOpen;
        if (sfFloatRect_contains(&helpButtonBounds, mousePos.x, mousePos.y))
            app->helpMenuOpen = !app->helpMenuOpen;
    }
}

void handle_event(App *app, sfEvent *event, object_t *obj)
{
    switch (event->type) {
        case sfEvtMouseButtonPressed:
            handle_main_buttons_clicked(app, event->mouseButton);
            handle_color_selection(app, obj, event->mouseButton);
            break;
        default:
            break;
    }
}

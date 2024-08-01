/*
** EPITECH PROJECT, 2022
** B-MUL-100-MPL-1-1-myradar-edgar.maurel
** File description:
** main.c
*/

#include "../include/my.h"

void destroy_button_and_items(App *app)
{
    for (int i = 0; i < 3; i++) {
        sfRectangleShape_destroy(app->fileMenuItems[i]);
        sfText_destroy(app->fileMenuItemTexts[i]);
    }
    for (int i = 0; i < 2; i++) {
        sfRectangleShape_destroy(app->editMenuItems[i]);
        sfText_destroy(app->editMenuItemTexts[i]);
        sfRectangleShape_destroy(app->helpMenuItems[i]);
        sfText_destroy(app->helpMenuItemTexts[i]);
    }
    for (int i = 0; i < 6; i++)
        sfRectangleShape_destroy(app->colorSquares[i]);
}

void destroy_app(App *app)
{
    sfRectangleShape_destroy(app->fileButton);
    sfRectangleShape_destroy(app->editButton);
    sfRectangleShape_destroy(app->helpButton);
    sfRectangleShape_destroy(app->separatorLine1);
    sfRectangleShape_destroy(app->separatorLine2);
    sfRenderWindow_destroy(app->window);
    sfFont_destroy(app->font);
    sfText_destroy(app->fileText);
    sfText_destroy(app->editText);
    sfText_destroy(app->helpText);
    destroy_button_and_items(app);
}

int main(void)
{
    object_t *obj = malloc(sizeof(object_t));
    App app;

    obj->lines = NULL;
    init_app(&app);
    while (sfRenderWindow_isOpen(app.window)) {
        while (sfRenderWindow_pollEvent(app.window, &app.event)) {
            analyse_events(app.window, app.event, obj);
            handle_event(&app, &app.event, obj);
        }
        sfRenderWindow_clear(app.window, sfWhite);
        draw_lines(obj, app.window);
        draw(&app);
        sfRenderWindow_display(app.window);
    }
    destroy_app(&app);
    free(obj);
}

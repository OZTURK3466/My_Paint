/*
** EPITECH PROJECT, 2024
** analyse_event
** File description:
** my_paint
*/

#include "../include/my.h"

void close_window(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed
    || (event.type == sfEvtKeyPressed && event.key.code == sfKeyEscape))
        sfRenderWindow_close(window);
}

void handle_mouse_button_pressed(sfEvent event, object_t *obj)
{
    if (event.mouseButton.button == sfMouseRight)
        remove_last_line(obj);
    else if (event.mouseButton.button == sfMouseLeft) {
        add_next_line(obj);
        obj->mouse_state = 1;
    }
}

void handle_mouse_moved(sfEvent event, object_t *obj)
{
    if (obj->mouse_state == 1)
        add_el_in_array
        (obj, (sfVector2f){event.mouseMove.x, event.mouseMove.y}, 8.0f);
}

void handle_mouse_button_released(sfEvent event, object_t *obj)
{
    if (event.mouseButton.button == sfMouseLeft)
        obj->mouse_state = 0;
}

void analyse_events(sfRenderWindow *window, sfEvent event, object_t *obj)
{
    close_window(window, event);
    if (event.type == sfEvtMouseButtonPressed)
        handle_mouse_button_pressed(event, obj);
    if (event.type == sfEvtMouseMoved)
        handle_mouse_moved(event, obj);
    if (event.type == sfEvtMouseButtonReleased)
        handle_mouse_button_released(event, obj);
}

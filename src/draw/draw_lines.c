/*
** EPITECH PROJECT, 2024
** draw_lines
** File description:
** my_paint
*/

#include "../../include/my.h"

void draw_lines(object_t *obj, sfRenderWindow *window)
{
    lines_t *current = obj->lines;

    while (current != NULL) {
        sfRenderWindow_drawVertexArray(window, current->array, NULL);
        current = current->next;
    }
}

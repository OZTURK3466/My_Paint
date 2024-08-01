/*
** EPITECH PROJECT, 2024
** remove_last_line
** File description:
** my_paint
*/

#include "../../include/my.h"

void remove_last_line(object_t *obj)
{
    lines_t *current;

    if (obj->lines == NULL) {
        return;
    }
    if (obj->lines->next == NULL) {
        free(obj->lines);
        obj->lines = NULL;
        return;
    }
    current = obj->lines;
    while (current->next->next != NULL) {
        current = current->next;
    }
    free(current->next);
    current->next = NULL;
}

/*
** EPITECH PROJECT, 2024
** add_next_line
** File description:
** my_paint
*/

#include "../../include/my.h"

void add_next_line(object_t *obj)
{
    lines_t *current;

    if (obj->lines == NULL) {
        obj->lines = create_line();
    } else {
        current = obj->lines;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = create_line();
    }
}

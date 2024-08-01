/*
** EPITECH PROJECT, 2024
** create_line
** File description:
** my_paint
*/

#include "../../include/my.h"

lines_t *create_line(void)
{
    lines_t *line = malloc(sizeof(lines_t));

    line->array = sfVertexArray_create();
    line->next = NULL;
    return line;
}

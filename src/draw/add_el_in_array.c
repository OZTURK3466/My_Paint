/*
** EPITECH PROJECT, 2024
** add_el_in_array
** File description:
** my_paint
*/

#include "../../include/my.h"

void array(sfVertex *line1, object_t *obj)
{
    lines_t *current;

    if (obj->lines == NULL)
        return;
    current = obj->lines;
    while (current->next != NULL)
        current = current->next;
    sfVertexArray_append(current->array, line1[0]);
    sfVertexArray_append(current->array, line1[1]);
    sfVertexArray_setPrimitiveType(current->array, sfTriangleStrip);
}

void add_el_in_array(object_t *obj, sfVector2f point, float thickness)
{
    sfVertex line1[2];

    obj->colors = malloc(sizeof(sfColor) * 8);
    obj->colors[0] = sfRed;
    obj->colors[1] = sfGreen;
    obj->colors[2] = sfBlue;
    obj->colors[3] = sfYellow;
    obj->colors[4] = sfMagenta;
    obj->colors[5] = sfCyan;
    obj->colors[6] = sfBlack;
    obj->colors[7] = sfWhite;
    line1[0].position.x = point.x + thickness / 2;
    line1[0].position.y = point.y + thickness / 2;
    line1[0].color = obj->colors[obj->selected_color];
    line1[1].position.x = point.x - thickness / 2;
    line1[1].position.y = point.y - thickness / 2;
    line1[1].color = obj->colors[obj->selected_color];
    array(line1, obj);
}

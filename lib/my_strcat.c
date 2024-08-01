/*
** EPITECH PROJECT, 2024
** strcat
** File description:
** lib
*/

#include "../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int size_dest = my_strlen(dest);
    int size_src = my_strlen(src);

    for (int i = 0; i < size_src; i++) {
        dest[size_dest + i] = src[i];
    }
    dest[size_dest + size_src] = '\0';
    return dest;
}

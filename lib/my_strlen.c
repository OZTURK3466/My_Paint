/*
** EPITECH PROJECT, 2023
** d7
** File description:
** my_strlen
*/

#include <unistd.h>
#include "../include/my.h"

int my_strlen(char const *str)
{
    int len = 0;

    for (int i = 0; str[i]; i++) {
        len++;
    }
    return len;
}

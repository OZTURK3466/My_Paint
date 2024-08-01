/*
** EPITECH PROJECT, 2023
** d7
** File description:
** my_putstr
*/

#include <unistd.h>
#include "../include/my.h"

int my_putstr(char const *str)
{
    int length = my_strlen(str);

    write(1, str, length);
    return 0;
}

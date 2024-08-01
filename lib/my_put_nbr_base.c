/*
** EPITECH PROJECT, 2023
** my_put_base
** File description:
** my_put_base
*/

#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

void my_put_nbr_base(int nbr, char const *base)
{
    int index;
    int len = my_strlen(base);

    index = nbr % len;
    nbr = nbr / len;
    if (nbr > 0) {
        my_put_nbr_base(nbr, base);
    }
    my_putchar(base[index]);
}

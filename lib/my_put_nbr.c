/*
** EPITECH PROJECT, 2023
** d6
** File description:
** my_put_nbr
*/

#include <unistd.h>
#include "../include/my.h"

int my_print_nbr(int nb)
{
    int c = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    } else if (nb == 0) {
        return 0;
    }
    my_print_nbr(nb / 10);
    c = (nb % 10) + '0';
    my_putchar(c);
    return 0;
}

int my_put_nbr(int nb)
{
    if (nb < -2147483647)
        write(1, "-2147483648", 11);
    else if (nb == 0)
        my_putchar('0');
    else
        my_print_nbr(nb);
    return 0;
}

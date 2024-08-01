/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include "../include/my.h"
#include <stdio.h>

void disp_stdarg(char const *str, va_list list, int i)
{
    if (str[i] == 'c')
        my_putchar(va_arg(list, int));
    if (str[i] == 'd' || str[i] == 'i')
        my_put_nbr(va_arg(list, int));
    if (str[i] == 's')
        my_putstr(va_arg(list, char *));
    if (str[i] == 'x')
        my_put_nbr_base(va_arg(list, int), "0123456789abcdef");
    if (str[i] == 'X')
        my_put_nbr_base(va_arg(list, int), "0123456789ABCDEF");
    if (str[i] == 'o')
        my_put_nbr_base(va_arg(list, int), "01234567");
    if (str[i] == '%')
        my_putchar('%');
}

void my_printf(char const *format, ...)
{
    va_list list;

    va_start(list, format);
    for (int i = 0; i < my_strlen(format); i++){
        if (format[i] != '%')
            my_putchar(format[i]);
        if (format[i] == '%'){
            i++;
            disp_stdarg(format, list, i);
        }
    }
    va_end(list);
}

/*
** EPITECH PROJECT, 2024
** strncmp
** File description:
** lib
*/

#include "../include/my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            return (s1[i] < s2[i]) ? -1 : 1;
        }
    }
    return 0;
}

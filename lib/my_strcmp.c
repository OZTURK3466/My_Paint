/*
** EPITECH PROJECT, 2023
** strcmp
** File description:
** strcmp
*/

#include <stdlib.h>
#include "../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int len_s1 = my_strlen(s1);
    int len_s2 = my_strlen(s2);
    int len_max = 0;
    int i = 0;

    if (len_s1 > len_s2)
        len_max = len_s1;
    else
        len_max = len_s2;
    while (i < len_max){
        if (s1[i] - s2[i] < 0){
            return -1;
        }
        if (s1[i] - s2[i] > 0){
            return 1;
        }
        i++;
    }
    return 0;
}

/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** my_strlen
*/

#include <stddef.h>

int my_strlen(const char *str)
{
    int i = 0;

    if (str == NULL)
        return (-1);
    while (str[i] != '\0') {
        i += 1;
    }
    return (i);
}
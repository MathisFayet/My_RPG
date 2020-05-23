/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** putstr
*/

#include <unistd.h>

int my_putstr(char *str)
{
    int index = 0;

    if (str == NULL)
        return (1);
    while (str[index] != '\0') {
        if (write(1, &str[index], 1) < 1)
            return (1);
        index += 1;
    }
    return (0);
}
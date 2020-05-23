/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** get_map_info
*/

#include "my_rpg.h"

char *get_map_info(char *line)
{
    int i = 0;

    while (line[i] != '=' && line[i] != '\0') {
        i += 1;
    }
    if (i == my_strlen(line))
        return ("error");
    return (&line[i + 1]);
}
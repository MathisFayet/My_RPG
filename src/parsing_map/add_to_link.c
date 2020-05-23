/*
** EPITECH PROJECT, 2020
** add
** File description:
** add
*/

#include <stdlib.h>
#include "my_rpg.h"

char *add_string(char *str, char *suit)
{
    int i = 0;
    int y = 0;
    char *srt = malloc(sizeof(char) * (my_strlen(str) + my_strlen(suit) + 1));

    if (srt == NULL)
        return (NULL);
    while (str[i] != '\0') {
        srt[i] = str[i];
        i++;
    }
    while (suit[y] != '\0') {
        srt[i] = suit[y];
        i++;
        y++;
    }
    srt[i] = '\0';
    return (srt);
}

int add_to_linked(char *name, MAP_TYPE type, l_map_t **map, char *size)
{
    char *buf = open_map(add_string(size, name));
    char **mp = NULL;

    if (buf == NULL)
        return (1);
    if ((mp = my_str_to_word_array(buf, '\n')) == NULL)
        return (1);
    if (my_put_in_list(map, name, type, mp) == NULL)
        return (1);
    return (0);
}
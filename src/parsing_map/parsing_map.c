/*
** EPITECH PROJECT, 2020
** parsing_map
** File description:
** parsing_map
*/

#include "my_rpg.h"

int checkflag(char format)
{
    int y = 0;
    char *flags = "0123456789azpser";

    while (flags[y] != '\0') {
        if (format == flags[y])
            return (y);
        y++;
    }
    return (-1);
}

int check_line_map(char **map, int y, elem_map_t **elements)
{
    int x = 0;
    int check = 0;
    sfVector2f pos = {0, 0};
    elem_map_t *(*mapping[])(elem_map_t **, ELEM_MAP_TYPE, sfVector2f) =
        {&way, &tree, &bush, &ennemy, &house, &rock, &wall, &fight, &water,
        &poke, &objet, &poke_leg, &potion, &start, &end, &sand};

    while (map[y][x] != '\0') {
        if ((check = checkflag(map[y][x])) < 0)
            return (1);
        pos.x = x;
        pos.y = y;
        mapping[check](elements, check, pos);
        x += 1;
    }
}

int put_map_elements(char **map, elem_map_t **elements)
{
    int y = 0;

    while (map[y] != NULL) {
        if (check_line_map(map, y, elements) == 1)
            return (1);
        y += 1;
    }
    return (0);
}
/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** player_finish
*/

#include "my_rpg.h"

int player_on_finish(rpg_t *my_rpg)
{
    char *name = my_rpg->maps->actual_map->name;
    sfVector2f player = sfSprite_getPosition(my_rpg->player->o_player->sprite);
    int x = player.x /= 128;
    int y = player.y /= 70;

    if (my_rpg->maps->actual_map->map[y + 1][x] == 'e') {
        free_map_elem(my_rpg);
        change_actual_map(my_rpg, name, BASIC_MAP);
        return (1);
    }
    return (0);
}
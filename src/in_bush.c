/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** in_bush
*/

#include "my_rpg.h"

int is_in_bush(rpg_t *my_rpg)
{
    int x = my_rpg->player->pos.x;
    int y = my_rpg->player->pos.y;

    if (my_rpg->maps->actual_map->type == FIGHT_MAP)
        return (0);
    if (my_rpg->maps->actual_map->map[y][x] == '2') {
        my_rpg->maps->in_bush.time =
        sfClock_getElapsedTime(my_rpg->maps->in_bush.clock);
        if (sfTime_asSeconds(my_rpg->maps->in_bush.time) >= 25.0) {
            player_go_fight(my_rpg);
            sfClock_restart(my_rpg->maps->in_bush.clock);
        }
    } else {
        sfClock_restart(my_rpg->maps->in_bush.clock);
    }
    return (0);
}
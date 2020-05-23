/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** go_fight
*/

#include "my_rpg.h"

int change_pos_player(rpg_t *my_rpg)
{
    sfVector2f pos = sfSprite_getPosition(my_rpg->player->o_player->sprite);

    pos.x = (my_rpg->player->pos.x * 128) + 15;
    pos.y = (my_rpg->player->pos.y * 70) - 20;
    sfSprite_setPosition(my_rpg->player->o_player->sprite, pos);
    return (0);
}

int player_go_fight(rpg_t *my_rpg)
{
    char *name = my_rpg->maps->actual_map->name;

    free_map_elem(my_rpg);
    change_actual_map(my_rpg, name, FIGHT_MAP);
    create_new_map(my_rpg, NULL);
    my_rpg->player->pos.x = 0;
    my_rpg->player->pos.y = 0;
    change_pos_player(my_rpg);
    return (0);
}

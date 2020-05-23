/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** struct_player
*/

#include <stdlib.h>
#include "my_rpg.h"

player_t *init_player_struct(void)
{
    player_t *new_player = malloc(sizeof(player_t));

    new_player->o_player = NULL;
    new_player->pos.x = 0;
    new_player->pos.y = 0;
    new_player->anim.clock = NULL;
    new_player->anim.time;
    new_player->move.clock = NULL;
    new_player->move.time;
    new_player->in_move = 0;
    return (new_player);
}
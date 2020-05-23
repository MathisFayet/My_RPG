/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** animation
*/

#include "my_rpg.h"

int create_animation_player(rpg_t *my_rpg)
{
    sfIntRect rect = sfSprite_getTextureRect(my_rpg->player->o_player->sprite);

    if (my_rpg->player->in_move == 0)
        return (1);
    my_rpg->player->anim.time =
        sfClock_getElapsedTime(my_rpg->player->anim.clock);
    if (sfTime_asSeconds(my_rpg->player->anim.time) >= 0.05) {
        if (rect.top <= 0)
            rect.top = 332;
        else
            rect.top -= 166;
        sfSprite_setTextureRect(my_rpg->player->o_player->sprite, rect);
        sfClock_restart(my_rpg->player->anim.clock);
    }
    return (0);
}

int reset_rect_player(rpg_t *my_rpg)
{
    sfIntRect rect = sfSprite_getTextureRect(my_rpg->player->o_player->sprite);

    rect.top = 332;
    sfSprite_setTextureRect(my_rpg->player->o_player->sprite, rect);
    return (0);
}
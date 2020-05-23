/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** win_loose
*/

#include "my_rpg.h"

void check_life_pokemon(rpg_t *my_rpg)
{
    if (my_rpg->fight->life_me <= 0) {
        my_rpg->game_instance = S_LOOSE;
        sfMusic_stop(my_rpg->window->fight);
        stop_scene_music(my_rpg, S_GAME);
        reset_view_menu(my_rpg);
    }
}
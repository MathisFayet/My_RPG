/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** button_callback4
*/

#include <stdlib.h>
#include "my_rpg.h"

void interact_key(rpg_t *my_rpg)
{
    my_rpg->window->choose_int = 1;
}

void leave_fight(rpg_t *my_rpg)
{
    if (my_rpg->maps->actual_map->type == BASIC_MAP) {
        sfMusic_stop(my_rpg->window->fight);
        play_scene_music(my_rpg, S_GAME);
    }
    my_rpg->game_instance = S_GAME;
}

void attack(rpg_t *my_rpg)
{
    int random = rand() % 4;

    sfMusic_stop(my_rpg->fight->attack);
    sfMusic_play(my_rpg->fight->attack);
    my_rpg->fight->life_adv -= 30;
    if (my_rpg->fight->life_adv <= 0) {
        my_rpg->text->verif_t = 1;
        add_to_invent(my_rpg->invent, POKEMAN, my_rpg);
        leave_fight(my_rpg);
    }
    if (random == 1) {
        sfMusic_stop(my_rpg->fight->attack);
        sfMusic_play(my_rpg->fight->attack);
        my_rpg->fight->life_me -= 20;
    }
}
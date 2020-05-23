/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** interaction
*/

#include "my_rpg.h"

void change_interact_key(rpg_t *my_rpg, sfEvent event)
{
    if (event.key.code == 0)
        return;
    if ((event.key.code >= sfKeyA && event.key.code <= sfKeyReturn) &&
        event.key.code != sfKeyQ && event.key.code != sfKeyEscape &&
        event.key.code != sfKeyLeft && event.key.code != sfKeyRight &&
        event.key.code != sfKeyUp && event.key.code != sfKeyDown &&
        event.key.code != sfKeyI) {
        my_rpg->saved_inf->interact = event.key.code;
    } else {
        my_rpg->saved_inf->interact = sfKeyO;
    }
    my_rpg->window->choose_int = 0;
}

int interaction_event(rpg_t *my_rpg)
{
    char **map = my_rpg->maps->actual_map->map;

    if (my_rpg->player->react == 1) {
        sfMusic_play(my_rpg->window->item);
        add_to_invent(my_rpg->invent, POTION, my_rpg);
        map[my_rpg->player->y][my_rpg->player->x] = '2';
        my_rpg->text->verif = 1;
    }
    if (my_rpg->player->react == 2) {
        if (my_rpg->maps->actual_map->type == BASIC_MAP) {
            stop_scene_music(my_rpg, S_GAME);
            sfMusic_play(my_rpg->window->fight);
        }
        my_rpg->game_instance = S_FIGHT;
        my_rpg->fight->life_adv = 100;
        reset_view_menu(my_rpg);
        create_enemy_pokemon(my_rpg);
    }
    return (0);
}
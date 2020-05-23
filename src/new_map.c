/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** new_map
*/

#include "my_rpg.h"

void create_new_map(rpg_t *my_rpg, scene_t *scene)
{
    if (my_rpg->maps->actual_map->type == FIGHT_MAP) {
        stop_scene_music(my_rpg, S_GAME);
        sfMusic_play(my_rpg->window->fight);
    }
    put_map_elements(my_rpg->maps->actual_map->map, &my_rpg->maps->elem_map);
    if (my_rpg->maps->actual_map->type == BASIC_MAP) {
        sfMusic_stop(my_rpg->window->fight);
        play_scene_music(my_rpg, S_GAME);
    }
}
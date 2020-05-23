/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** game_scene
*/

#include "my_rpg.h"

static int player_already_exist(scene_t *game)
{
    object_t *objs = game->objects;

    while (objs != NULL) {
        if (objs->type == O_PLAYER)
            return (1);
        objs = objs->next;
    }
    return (0);
}

static void create_actual_map(rpg_t *my_rpg, scene_t *game)
{
    l_map_t *tmp = my_rpg->maps->list_maps;

    while (tmp != NULL) {
        if (my_strcmp(tmp->name, my_rpg->saved_inf->map) == 0) {
            my_rpg->maps->actual_map = tmp;
            return;
        }
        tmp = tmp->next;
    }
    tmp = my_rpg->maps->list_maps;
    while (tmp != NULL) {
        if (my_strcmp(tmp->name, "map3.txt") == 0) {
            my_rpg->maps->actual_map = tmp;
            return;
        }
        tmp = tmp->next;
    }
    my_rpg->maps->actual_map = my_rpg->maps->list_maps;
}

void draw_map_element(rpg_t *my_rpg, scene_t *game)
{
    elem_map_t *tmp_map = my_rpg->maps->elem_map;

    while (tmp_map != NULL) {
        sfRenderWindow_drawSprite(my_rpg->window->window, tmp_map->sprite,
            NULL);
        tmp_map = tmp_map->next;
    }
}

void game_scene_manage(rpg_t *my_rpg, scene_t *game)
{
    if (player_already_exist(game) != 1)
        create_new_player(my_rpg, game);
    if (my_rpg->maps->actual_map == NULL)
        create_actual_map(my_rpg, game);
    if (my_rpg->maps->elem_map == NULL)
        create_new_map(my_rpg, game);
}
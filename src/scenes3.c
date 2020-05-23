/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** scenes3
*/

#include "my_rpg.h"

scene_t *put_list_how_play(scene_t **scenes, SCENE_TYPE type)
{
    scene_t *how_play = *scenes;

    if (*scenes == NULL)
        how_play = empty_list_scene(scenes, type);
    else
        how_play = append_list_scene(scenes, type);
    while (how_play->next != NULL)
        how_play = how_play->next;
    put_list_objects(&how_play->objects, O_BACKGROUND,
        "assets/img/how_play.png");
    return (*scenes);
}
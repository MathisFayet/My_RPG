/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** list_scene
*/

#include <stdlib.h>
#include "my_rpg.h"

scene_t *empty_list_scene(scene_t **scene, SCENE_TYPE type)
{
    scene_t *new_scene = malloc(sizeof(scene_t));

    if (new_scene == NULL)
        return (NULL);
    new_scene->type = type;
    new_scene->objects = NULL;
    new_scene->buttons = NULL;
    new_scene->texts = NULL;
    new_scene->main_music = NULL;
    new_scene->next = NULL;
    *scene = new_scene;
    return (*scene);
}

scene_t *append_list_scene(scene_t **scene, SCENE_TYPE type)
{
    scene_t *new_scene = malloc(sizeof(scene_t));
    scene_t *tmp = *scene;

    if (new_scene == NULL)
        return (NULL);
    while (tmp->next != NULL)
        tmp = tmp->next;
    new_scene->type = type;
    new_scene->objects = NULL;
    new_scene->buttons = NULL;
    new_scene->texts = NULL;
    new_scene->main_music = NULL;
    new_scene->next = NULL;
    tmp->next = new_scene;
    return (*scene);
}

scene_t *put_list_scene(scene_t **scene, SCENE_TYPE type)
{
    scene_t *(*fptr_scenes[])(scene_t **, SCENE_TYPE) = {
        &put_list_start, &put_list_menu, &put_list_settings,
        &put_list_how_play, &put_list_skin, &put_list_game,
        &put_list_inventory, &put_list_pause, &put_list_fight,
        &put_list_loose};

    if (fptr_scenes[type](scene, type) == NULL)
        return (NULL);
    return (*scene);
}
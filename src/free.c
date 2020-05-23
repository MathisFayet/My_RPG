/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** free
*/

#include <stdlib.h>
#include "my_rpg.h"

static void free_objects(rpg_t *my_rpg, scene_t *scene)
{
    object_t *objects = scene->objects;
    object_t *tmp = scene->objects;

    while (objects != NULL) {
        sfSprite_destroy(objects->sprite);
        sfTexture_destroy(objects->texture);
        objects = objects->next;
        free(tmp);
        tmp = objects;
    }
    free(objects);
}

static void free_buttons(rpg_t *my_rpg, scene_t *scene)
{
    buttons_t *buttons = scene->buttons;
    buttons_t *tmp = scene->buttons;

    while (buttons != NULL) {
        sfRectangleShape_destroy(buttons->rect);
        sfText_destroy(buttons->text);
        buttons = buttons->next;
        free(tmp);
        tmp = buttons;
    }
    free(buttons);
}

void free_elements_scene(rpg_t *my_rpg, scene_t *scene)
{
    free_objects(my_rpg, scene);
    free_buttons(my_rpg, scene);
    scene->main_music == NULL ? 0 : sfMusic_destroy(scene->main_music);
}

void free_other_sounds(rpg_t *my_rpg)
{
    sfMusic_destroy(my_rpg->window->click);
    sfMusic_destroy(my_rpg->window->fight);
    sfMusic_destroy(my_rpg->window->inventory);
    sfMusic_destroy(my_rpg->window->item);
    sfMusic_destroy(my_rpg->window->reward);
    sfMusic_destroy(my_rpg->fight->attack);
}

void free_all(rpg_t *my_rpg)
{
    scene_t *scene = my_rpg->scenes;
    scene_t *tmp = my_rpg->scenes;

    while (scene != NULL) {
        free_elements_scene(my_rpg, scene);
        scene = scene->next;
        free(tmp);
        tmp = scene;
    }
    free_other_sounds(my_rpg);
    sfView_destroy(my_rpg->window->view);
    sfRenderWindow_destroy(my_rpg->window->window);
    free_invent(my_rpg);
    free(my_rpg);
}
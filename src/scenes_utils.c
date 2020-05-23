/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** scenes_utils
*/

#include "my_rpg.h"

static void draw_scene_elements(rpg_t *my_rpg, scene_t *scene)
{
    for (object_t *objs = scene->objects; objs != NULL; objs = objs->next)
        sfRenderWindow_drawSprite(my_rpg->window->window, objs->sprite, NULL);
    for (texts_t *txt = scene->texts; txt != NULL; txt = txt->next)
        sfRenderWindow_drawText(my_rpg->window->window, txt->text, NULL);
    for (buttons_t *butt = scene->buttons; butt != NULL; butt = butt->next) {
        if (butt->display == 1) {
            sfRenderWindow_drawRectangleShape(my_rpg->window->window,
                butt->rect, NULL);
            sfRenderWindow_drawText(my_rpg->window->window, butt->text, NULL);
        }
    }
}

static void draw_scene(rpg_t *my_rpg, scene_t *scene)
{
    if (scene->type == S_GAME)
        game_scene_manage(my_rpg, scene);
    update_texts_elements(my_rpg, scene);
    draw_scene_elements(my_rpg, scene);
    if (scene->type == S_INVENTORY)
        display_inventory(&my_rpg->invent, my_rpg, scene);
    if (scene->type == S_GAME) {
        draw_map_element(my_rpg, scene);
        player_management(my_rpg, scene);
    }
}

void scenes_management(rpg_t *my_rpg)
{
    scene_t *tmp = my_rpg->scenes;

    while (tmp != NULL) {
        if (tmp->type == my_rpg->game_instance) {
            draw_scene(my_rpg, tmp);
        }
        tmp = tmp->next;
    }
}
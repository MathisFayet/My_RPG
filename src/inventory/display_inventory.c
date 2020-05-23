/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** display_inventory
*/

#include "my_rpg.h"

static void change_txt_pos(rpg_t *my_rpg, scene_t *scene, invent_t **invent)
{
    texts_t *txt = scene->texts;

    while (txt != NULL) {
        if (txt->type == MAIN_LIFE) {
            sfText_setColor(txt->text, sfWhite);
            sfText_setPosition(txt->text,
                create_vector(WINDOW_WIDTH / 5.5, (WINDOW_HEIGHT / 3) - 25));
        }
        txt = txt->next;
    }
}

void display_inventory(invent_t **invent, rpg_t *my_rpg, scene_t *scene)
{
    invent_t *tmp = *invent;

    if (tmp == NULL)
        return;
    change_txt_pos(my_rpg, scene, invent);
    while (tmp != NULL) {
        sfRenderWindow_drawSprite(my_rpg->window->window, tmp->sprite, NULL);
        tmp = tmp->next;
    }
    print_objectf(my_rpg);
}

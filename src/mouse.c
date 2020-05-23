/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** mouse
*/

#include "my_rpg.h"

int button_hover(rpg_t *my_rpg, scene_t *scene, buttons_t *button)
{
    sfVector2i mouse = sfMouse_getPosition(NULL);
    sfVector2f button_pos = sfRectangleShape_getPosition(button->rect);
    sfVector2f button_scale = sfRectangleShape_getSize(button->rect);

    if (((mouse.x > button_pos.x) && (mouse.x < (button_pos.x +
        button_scale.x))) && ((mouse.y > button_pos.y)
        && (mouse.y < (button_pos.y + button_scale.y)))) {
        return (1);
    }
    return (0);
}

void change_button_color_scene(rpg_t *my_rpg, scene_t *scene, buttons_t *butt)
{
    if (button_hover(my_rpg, scene, butt) == 1) {
        sfRectangleShape_setFillColor(butt->rect,
            sfColor_fromRGBA(225, 225, 225, 255));
    } else {
        sfRectangleShape_setFillColor(butt->rect,
            sfColor_fromRGBA(225, 225, 225, 175));
    }
}

int get_scene_buttons(rpg_t *my_rpg, scene_t *scene)
{
    buttons_t *tmp = scene->buttons;

    while (tmp != NULL) {
        if (tmp->display == 1) {
            change_button_color_scene(my_rpg, scene, tmp);
        }
        tmp = tmp->next;
    }
    return (0);
}

int check_mouse_position(rpg_t *my_rpg)
{
    scene_t *tmp = my_rpg->scenes;

    while (tmp != NULL) {
        if (tmp->type == my_rpg->game_instance) {
            get_scene_buttons(my_rpg, tmp);
        }
        tmp = tmp->next;
    }
    return (0);
}

void check_mouse_click(rpg_t *my_rpg, sfEvent event)
{
    scene_t *scene = my_rpg->scenes;

    sfMusic_stop(my_rpg->window->click);
    sfMusic_play(my_rpg->window->click);
    while (scene != NULL) {
        if (scene->type == my_rpg->game_instance) {
            buttons_mouse_click(my_rpg, scene, event);
        }
        scene = scene->next;
    }
}
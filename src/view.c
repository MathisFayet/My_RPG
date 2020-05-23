/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** view
*/

#include "my_rpg.h"

void view_on_player(rpg_t *my_rpg)
{
    sfView *view = my_rpg->window->view;
    sfVector2f player = sfSprite_getPosition(my_rpg->player->o_player->sprite);

    player.x += 200;
    player.y += 200;
    sfView_setCenter(view, player);
}

void reset_view_menu(rpg_t *my_rpg)
{
    sfVector2f center = {0, 0};

    center.x = WINDOW_WIDTH / 2;
    center.y = WINDOW_HEIGHT / 2;
    sfView_setCenter(my_rpg->window->view, center);
}
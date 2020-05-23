/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** new_player
*/

#include "my_rpg.h"

void draw_player(rpg_t *my_rpg, scene_t *game)
{
    object_t *player = my_rpg->player->o_player;

    if (player != NULL) {
        sfRenderWindow_drawSprite(my_rpg->window->window, player->sprite,
            NULL);
    }
}

int create_new_player(rpg_t *my_rpg, scene_t *game)
{
    object_t *tmp = NULL;

    if (my_rpg->saved_inf->character == 2) {
        put_list_objects(&game->objects, O_PLAYER, "assets/img/player2.png");
    } else {
        put_list_objects(&game->objects, O_PLAYER, "assets/img/player1.png");
    }
    create_main_pokemon(my_rpg);
    for (tmp = game->objects; tmp != NULL; tmp = tmp->next) {
        if (tmp->type == O_PLAYER) {
            my_rpg->player->o_player = tmp;
            break;
        }
    }
    return (0);
}
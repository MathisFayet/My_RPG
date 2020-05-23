/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** player_pos
*/

#include "my_rpg.h"

static int check_line(rpg_t *my_rpg, char *line, int y)
{
    int x = 0;

    while (line[x] != '\0') {
        if (line[x] == 's') {
            my_rpg->player->pos.x = x;
            my_rpg->player->pos.y = y;
            return (1);
        }
        x += 1;
    }
    return (0);
}

void spawn_in_new_map(rpg_t *my_rpg)
{
    int y = 0;
    char **map = my_rpg->maps->actual_map->map;

    my_rpg->player->anim.clock = sfClock_create();
    my_rpg->player->move.clock = sfClock_create();
    my_rpg->maps->in_bush.clock = sfClock_create();
    while (map[y] != NULL) {
        if (check_line(my_rpg, map[y], y) == 1)
            return;
        y += 1;
    }
    my_rpg->player->pos.x = 128 + 15;
    my_rpg->player->pos.y = 70 - 20;
}

int change_pos_value(rpg_t *my_rpg)
{
    sfVector2f pos = sfSprite_getPosition(my_rpg->player->o_player->sprite);

    pos.x = (my_rpg->player->pos.x * 128) + 15;
    pos.y = (my_rpg->player->pos.y * 70) - 20;
    sfSprite_setPosition(my_rpg->player->o_player->sprite, pos);
    return (0);
}

int in_movement(rpg_t *my_rpg)
{
    my_rpg->player->move.time =
        sfClock_getElapsedTime(my_rpg->player->move.clock);
    if (sfTime_asSeconds(my_rpg->player->move.time) >= 0.3) {
        change_pos_value(my_rpg);
        reset_rect_player(my_rpg);
        my_rpg->player->in_move = 0;
        sfClock_restart(my_rpg->player->move.clock);
    }
    return (0);
}

void player_management(rpg_t *my_rpg, scene_t *game)
{
    if (my_rpg->player->pos.x == 0 && my_rpg->player->pos.y == 0)
        spawn_in_new_map(my_rpg);
    create_animation_player(my_rpg);
    in_movement(my_rpg);
    check_life_pokemon(my_rpg);
    if (my_rpg->maps->actual_map->type == BASIC_MAP &&
        my_rpg->game_instance == S_GAME)
        view_on_player(my_rpg);
    else
        reset_view_menu(my_rpg);
    is_in_bush(my_rpg);
    if (player_on_finish(my_rpg) == 1) {
        my_rpg->player->pos.x = 0;
        my_rpg->player->pos.y = 0;
        change_pos_value(my_rpg);
    }
    draw_player(my_rpg, game);
}
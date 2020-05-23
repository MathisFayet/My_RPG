/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** moove_player
*/

#include "my_rpg.h"

int available_character(rpg_t *rpg, int y, int x)
{
    char **map = rpg->maps->actual_map->map;

    if (map[y][x] != '\0' && (map[y][x] == '0' || map[y][x] == '2' ||
        map[y][x] == 's' || map[y][x] == 'e')) {
        rpg->player->react = 0;
        return (1);
    }
    if (map[y][x] == 'p' || map[y][x] == 'a') {
        rpg->player->react = 1;
        rpg->player->x = x;
        rpg->player->y = y;
    } else if (map[y][x] == '3' || map[y][x] == 'z') {
        rpg->player->react = 2;
    } else
        rpg->player->react = 0;
    return (0);
}

int can_move(int direction, rpg_t *rpg, int y, int x)
{
    if (direction == 0)
        if (x > 1 && available_character(rpg, y, x - 1) == 1)
            return (-1);
    if (direction == 1)
        if (available_character(rpg, y, x + 1) == 1)
            return (1);
    if (direction == 2)
        if (y > 1 && available_character(rpg, y - 1, x) == 1)
            return (-1);
    if (direction == 3)
        if (available_character(rpg, y + 1, x) == 1)
            return (1);
    return (0);
}

int update_player_sprite(rpg_t *my_rpg, int direction)
{
    sfIntRect rect = sfSprite_getTextureRect(my_rpg->player->o_player->sprite);
    sfIntRect new_rect = rect;

    if (direction == 0)
        new_rect.left = 250;
    if (direction == 1)
        new_rect.left = 125;
    if (direction == 2)
        new_rect.left = 375;
    if (direction == 3)
        new_rect.left = 0;
    if (is_same_rect(rect, new_rect) == 1)
        return (1);
    sfSprite_setTextureRect(my_rpg->player->o_player->sprite, new_rect);
    return (0);
}

int move_player(rpg_t *my_rpg, int direction)
{
    int player_x = my_rpg->player->pos.x;
    int player_y = my_rpg->player->pos.y;
    char **map = my_rpg->maps->actual_map->map;
    int status = 0;

    if (my_rpg->player->in_move != 0)
        return (0);
    if (update_player_sprite(my_rpg, direction) == 0) {
        return (1);
    }
    if ((status = can_move(direction, my_rpg, player_y, player_x)) != 0) {
        my_rpg->player->in_move = 1;
        if (direction == 0 || direction == 1) {
            my_rpg->player->pos.x += status;
        } else {
            my_rpg->player->pos.y += status;
        }
    }
    return (0);
}

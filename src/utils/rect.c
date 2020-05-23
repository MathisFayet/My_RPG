/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** rect
*/

#include "my_rpg.h"

int is_same_rect(sfIntRect rect, sfIntRect other_rect)
{
    if ((rect.left == other_rect.left) && (rect.top == other_rect.top) &&
    (rect.width == other_rect.width) && (rect.height == other_rect.height))
        return (1);
    return (0);
}

int is_in_rect(sfVector2f object, sfIntRect rect)
{
    if ((object.x >= rect.left && object.x <= rect.width) &&
        (object.y >= rect.top && object.y <= rect.height))
        return (1);
    return (0);
}

sfVector2f create_vector(int x, int y)
{
    sfVector2f vector = {0, 0};

    vector.x = x;
    vector.y = y;
    return (vector);
}

sfIntRect create_rect(int left, int top, int width, int height)
{
    sfIntRect rect = {0, 0, 0, 0};

    rect.left = left;
    rect.top = top;
    rect.width = width;
    rect.height = height;
    return (rect);
}
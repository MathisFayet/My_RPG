/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create_button
*/

#include <stdlib.h>
#include "my_rpg.h"

buttons_t *create_button(sfVector2f position, sfVector2f size)
{
    buttons_t *new_button = malloc(sizeof(buttons_t));
    sfRectangleShape *button = sfRectangleShape_create();

    sfRectangleShape_setPosition(button, position);
    sfRectangleShape_setSize(button, size);
    sfRectangleShape_setFillColor(button,
        sfColor_fromRGBA(225, 225, 225, 175));
    new_button->rect = button;
    return (new_button);
}
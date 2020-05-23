/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** button_is_clicked
*/

#include "my_rpg.h"

int button_is_clicked(buttons_t *button, sfMouseButtonEvent mouse)
{
    sfVector2f button_pos = sfRectangleShape_getPosition(button->rect);
    sfVector2f button_scale = sfRectangleShape_getSize(button->rect);

    if (((mouse.x > button_pos.x) && (mouse.x < (button_pos.x +
        button_scale.x))) && ((mouse.y > button_pos.y)
        && (mouse.y < (button_pos.y + button_scale.y)))) {
        return (1);
    }
    return (0);
}
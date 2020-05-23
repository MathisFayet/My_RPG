/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create_text
*/

#include "my_rpg.h"

sfText *create_text(char *str, sfVector2f position, sfVector2f size)
{
    sfFont *f = sfFont_createFromFile("assets/font/IndieFlower-Regular.ttf");
    sfText *text = sfText_create();

    sfText_setString(text, str);
    sfText_setFont(text, f);
    sfText_setCharacterSize(text, 55);
    sfText_setColor(text, sfBlack);
    position.x = (position.x + (size.x / 3)) - my_strlen(str);
    position.y = (position.y + (size.y / 8));
    sfText_setPosition(text, position);
    return (text);
}
/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create_objects
*/

#include <stdlib.h>
#include "my_rpg.h"

object_t *create_object(char *filepath, sfVector2f pos, sfIntRect rect)
{
    object_t *element = malloc(sizeof(object_t));
    sfSprite *new_sprite = sfSprite_create();
    sfTexture *new_texture = sfTexture_createFromFile(filepath, NULL);

    if (element == NULL || new_sprite == NULL || new_texture == NULL)
        return (NULL);
    sfSprite_setTexture(new_sprite, new_texture, sfTrue);
    sfSprite_setTextureRect(new_sprite, rect);
    sfSprite_setPosition(new_sprite, pos);
    element->texture = new_texture;
    element->sprite = new_sprite;
    element->position = pos;
    element->rect = rect;
    element->next = NULL;
    return (element);
}
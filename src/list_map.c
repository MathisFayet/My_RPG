/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** list_map
*/

#include <stdlib.h>
#include "my_rpg.h"

elem_map_t *create_element(char *filepath, sfVector2f pos, sfIntRect rect)
{
    elem_map_t *element = malloc(sizeof(elem_map_t));
    sfSprite *new_sprite = sfSprite_create();
    sfTexture *new_texture = sfTexture_createFromFile(filepath, NULL);

    sfSprite_setTexture(new_sprite, new_texture, sfTrue);
    sfSprite_setTextureRect(new_sprite, rect);
    sfSprite_setPosition(new_sprite, pos);
    element->texture = new_texture;
    element->sprite = new_sprite;
    element->position = pos;
    element->rect = rect;
    return (element);
}

elem_map_t *empty_list_elements(elem_map_t **elements, ELEM_MAP_TYPE type,
    sfVector2f pos, char *filepath)
{
    elem_map_t *new_element = NULL;
    sfIntRect rect = {0, 0, 1920, 1080};

    new_element = create_element(filepath, pos, rect);
    new_element->type = type;
    new_element->next = NULL;
    *elements = new_element;
    return (*elements);
}
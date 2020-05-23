/*
** EPITECH PROJECT, 2020
** ke
** File description:
** ke
*/

#include "my_rpg.h"

elem_map_t *end(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos)
{
    elem_map_t *new_element = NULL;
    elem_map_t *tmp = NULL;
    sfIntRect rect = {1792, 0, 128, 70};

    pos.x *= 128;
    pos.y *= 70;
    if (*elements == NULL)
        empty_list_elements(elements, type, pos, ELEM_FILEPATH);
    tmp = *elements;
    while (tmp->next != NULL)
        tmp = tmp->next;
    new_element = create_element(ELEM_FILEPATH, pos, rect);
    new_element->type = type;
    new_element->next = NULL;
    tmp->next = new_element;
    return (*elements);
}

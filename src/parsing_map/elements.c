/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** elements
*/

#include "my_rpg.h"

elem_map_t *way(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos)
{
    elem_map_t *new_element = NULL;
    elem_map_t *tmp = NULL;
    sfIntRect rect = {0, 0, 128, 70};

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

elem_map_t *tree(elem_map_t **elements, ELEM_MAP_TYPE type, sfVector2f pos)
{
    elem_map_t *new_element = NULL;
    elem_map_t *tmp = NULL;
    sfIntRect rect = {128, 0, 128, 70};

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
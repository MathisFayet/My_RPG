/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** ad_node
*/

#include <stdlib.h>
#include "my_rpg.h"

invent_t *creat_invent(char *filepath, sfVector2f pos, sfIntRect rect)
{
    invent_t *element = malloc(sizeof(invent_t));
    sfSprite *new_sprite = sfSprite_create();
    sfTexture *new_texture = sfTexture_createFromFile(filepath, NULL);

    if (!element || !new_sprite || !new_texture)
        return (NULL);
    sfSprite_setTexture(new_sprite, new_texture, sfTrue);
    sfSprite_setPosition(new_sprite, pos);
    element->texture = new_texture;
    element->sprite = new_sprite;
    element->position = pos;
    return (element);
}

invent_t *ad_nod(invent_t **list, INVENTORY type, trans_t *trans)
{
    invent_t *tmp = *list;
    invent_t *node = malloc(sizeof(invent_t));

    if (node == NULL)
        return (NULL);
    while (tmp->next != NULL)
        tmp = tmp->next;
    node = creat_invent(trans->file, trans->position, trans->rect);
    node->type = type;
    node->next = NULL;
    tmp->next = node;
    return (*list);
}

invent_t *ad_first_nod(invent_t **list, INVENTORY type, trans_t *trans)
{
    invent_t *node = malloc(sizeof(invent_t));

    if (node == NULL)
        return (NULL);
    node = creat_invent(trans->file, trans->position, trans->rect);
    node->type = type;
    node->next = NULL;
    *list = node;
    return (*list);
}

invent_t *my_puts_list(invent_t **list, INVENTORY type, trans_t *trans)
{
    if (*list == NULL) {
        return ad_first_nod(list, type, trans);
    } else {
        return ad_nod(list, type, trans);
    }
}

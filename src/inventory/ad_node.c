/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** ad_node
*/

#include <stdlib.h>
#include "my_rpg.h"

invent_t *create_invent(char *filepath, sfVector2f pos, sfIntRect rect)
{
    invent_t *element = malloc(sizeof(invent_t));
    sfSprite *new_sprite = sfSprite_create();
    sfTexture *new_texture = sfTexture_createFromFile(filepath, NULL);

    if (!element || !new_sprite || !new_texture)
        return (NULL);
    sfSprite_setTexture(new_sprite, new_texture, sfTrue);
    sfSprite_setTextureRect(new_sprite, rect);
    sfSprite_setPosition(new_sprite, pos);
    element->texture = new_texture;
    element->sprite = new_sprite;
    element->position = pos;
    element->rect = rect;
    return (element);
}

invent_t *ad_node(invent_t **list, INVENTORY type, trans_t *trans)
{
    invent_t *tmp = *list;
    invent_t *node = malloc(sizeof(invent_t));
    sfVector2f scale = {0.7, 0.7};

    if (node == NULL)
        return (NULL);
    while (tmp->next != NULL)
        tmp = tmp->next;
    if ((node = create_invent(trans->file, trans->position, trans->rect))
        == NULL)
        return (NULL);
    node->type = type;
    type == POKEMAN ? sfSprite_setScale(node->sprite, scale) : 0;
    type == CHARACTERE ? sfSprite_setScale(node->sprite, scale) : 0;
    node->next = NULL;
    tmp->next = node;
    return (*list);
}

invent_t *ad_first_node(invent_t **list, INVENTORY type, trans_t *trans)
{
    invent_t *node = malloc(sizeof(invent_t));
    sfVector2f scale = {0.7, 0.7};

    if (node == NULL)
        return (NULL);
    if ((node = create_invent(trans->file, trans->position, trans->rect))
        == NULL)
        return (NULL);
    node->type = type;
    type == POKEMAN ? sfSprite_setScale(node->sprite, scale) : 0;
    type == CHARACTERE ? sfSprite_setScale(node->sprite, scale) : 0;
    node->next = NULL;
    *list = node;
    return (*list);
}

invent_t *my_put_list(invent_t **list, INVENTORY type, trans_t *trans)
{
    if (trans == NULL)
        return (NULL);
    if (*list == NULL) {
        return ad_first_node(list, type, trans);
    } else {
        return ad_node(list, type, trans);
    }
}

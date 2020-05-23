/*
** EPITECH PROJECT, 2020
** add
** File description:
** add
*/

#include <stdlib.h>
#include "my_rpg.h"

trans_t *add_trans(sfIntRect rect, sfVector2f pos)
{
    trans_t *trans = malloc(sizeof(trans_t));

    if (trans == NULL)
        return (NULL);
    trans->file = "assets/img/elements.png";
    trans->rect = rect;
    trans->position = pos;
}

void add_other_element(int nb, sfIntRect rect, INVENTORY type,
    invent_t *invent)
{
    if (nb == 2)
        my_put_list(&invent, type, add_trans(rect, create_vector(1215, 345)));
    if (nb == 3)
        my_put_list(&invent, type, add_trans(rect, create_vector(1030, 440)));
    if (nb == 4)
        my_put_list(&invent, type, add_trans(rect, create_vector(1125, 440)));
    if (nb == 5)
        my_put_list(&invent, type, add_trans(rect, create_vector(1215, 440)));
    if (nb == 6)
        my_put_list(&invent, type, add_trans(rect, create_vector(1030, 528)));
    if (nb == 7)
        my_put_list(&invent, type, add_trans(rect, create_vector(1125, 528)));
    if (nb == 8)
        my_put_list(&invent, type, add_trans(rect, create_vector(1215, 528)));
}

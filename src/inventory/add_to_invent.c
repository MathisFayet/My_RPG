/*
** EPITECH PROJECT, 2020
** add
** File description:
** add
*/

#include "my_rpg.h"

invent_t *add_potion(invent_t *inv, INVENTORY type)
{
    invent_t *tmp = inv;
    invent_t *status = NULL;
    int nb = 0;

    while (tmp->next != NULL) {
        if (tmp->type == POTION || tmp->type == OBJET)
            nb++;
        tmp = tmp->next;
    }
    if (nb == 0)
        status = my_put_list(&inv, POTION,
        add_trans(create_rect(1536, 0, 128, 70), create_vector(1030, 345)));
    if (nb == 1)
        status = my_put_list(&inv, POTION,
        add_trans(create_rect(1536, 0, 128, 70), create_vector(1125, 345)));
    else
        add_other_element(nb, create_rect(1536, 0, 128, 70), POTION, inv);
    return  (status);
}

invent_t *add_objet(invent_t *inv, INVENTORY type)
{
    invent_t *tmp = inv;
    invent_t *status = NULL;
    int nb = 0;

    while (tmp != NULL) {
        if (tmp->type == POTION || tmp->type == OBJET)
            nb++;
        tmp = tmp->next;
    }
    if (nb == 0)
        status = my_put_list(&inv, OBJET,
        add_trans(create_rect(1280, 0, 128, 70), create_vector(1030, 345)));
    if (nb == 1)
        status = my_put_list(&inv, OBJET,
        add_trans(create_rect(1280, 0, 128, 70), create_vector(1125, 345)));
    return (status);
}

invent_t *add_pok(invent_t *inv, INVENTORY type)
{
    invent_t *tmp = inv;
    invent_t *status = NULL;
    int nb = 0;

    while (tmp != NULL) {
        if (tmp->type == type)
            nb++;
        tmp = tmp->next;
    }
    if (nb == 2)
        status = my_put_list(&inv, POKEMAN,
        add_trans(create_rect(1152, 0, 126, 71), create_vector(715, 475)));
    if (nb == 3)
        status = my_put_list(&inv, POKEMAN,
        add_trans(create_rect(1152, 0, 126, 71), create_vector(715, 590)));
    return (status);
}

invent_t *add_to_invent(invent_t *invent, INVENTORY type, rpg_t *rpg)
{
    invent_t *status = NULL;

    if (type == POTION)
        status = add_potion(invent, type);
    if (type == OBJET)
        status = add_objet(invent, type);
    if (type == POKEMAN || type == POKEMAN_LEG) {
        status = add_pok(invent, type);
    }
    return (status);
}

/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** actual_map
*/

#include <stdlib.h>
#include "my_rpg.h"

int nb_map(rpg_t *my_rpg, MAP_TYPE type)
{
    int count = 0;
    l_map_t *tmp = my_rpg->maps->list_maps;

    while (tmp != NULL) {
        if (tmp->type == type) {
            count += 1;
        }
        tmp = tmp->next;
    }
    return (count);
}

void change_actual_map(rpg_t *my_rpg, char *old_name, MAP_TYPE type)
{
    int i = 0;
    int random = rand() % nb_map(my_rpg, type);
    l_map_t *tmp = my_rpg->maps->list_maps;

    while (tmp != NULL && i < random) {
        if (my_strcmp(tmp->name, old_name) != 0 && tmp->type == type) {
            my_rpg->maps->actual_map = tmp;
        }
        if (tmp->type == type)
            i += 1;
        tmp = tmp->next;
    }
}
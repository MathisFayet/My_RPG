/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** free_map_elem
*/

#include <stdlib.h>
#include "my_rpg.h"

void free_map_elem(rpg_t *my_rpg)
{
    elem_map_t *main = my_rpg->maps->elem_map;
    elem_map_t *tmp = main;

    while (main != NULL) {
        sfSprite_destroy(main->sprite);
        sfTexture_destroy(main->texture);
        main = main->next;
        free(tmp);
        tmp = main;
    }
    my_rpg->maps->elem_map = NULL;
}

void free_invent(rpg_t *my_rpg)
{
    invent_t *main = my_rpg->invent;
    invent_t *tmp = main;

    while (main != NULL) {
        sfSprite_destroy(main->sprite);
        sfTexture_destroy(main->texture);
        main = main->next;
        free(tmp);
        tmp = main;
    }
    if (main != NULL)
        free(main);
    free(my_rpg->text);
}

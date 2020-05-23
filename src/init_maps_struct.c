/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_maps_struct
*/

#include <stdlib.h>
#include "my_rpg.h"

maps_t *init_maps_struct(void)
{
    maps_t *struct_maps = malloc(sizeof(maps_t));
    l_map_t *list_maps = NULL;

    if (open_dir_room(&list_maps) == 1)
        return (NULL);
    if (open_dir_fight(&list_maps) == 1)
        return (NULL);
    if ((struct_maps->list_maps = list_maps) == NULL)
        return (NULL);
    struct_maps->actual_map = NULL;
    struct_maps->elem_map = NULL;
    struct_maps->in_bush.clock = NULL;
    return (struct_maps);
}
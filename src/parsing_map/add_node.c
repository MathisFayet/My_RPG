/*
** EPITECH PROJECT, 2020
** lol
** File description:
** lol
*/

#include <stdlib.h>
#include "my_rpg.h"

static l_map_t *add_node(l_map_t **list, char *name, MAP_TYPE type, char **map)
{
    l_map_t *tmp = *list;
    l_map_t *node = malloc(sizeof(l_map_t));

    if (node == NULL)
        return (NULL);
    while (tmp->next != NULL)
        tmp = tmp->next;
    node->name = my_strdup(name);
    node->type = type;
    node->map = map;
    node->next = NULL;
    tmp->next = node;
    return *list;
}

static l_map_t *add_first_node(l_map_t **list, char *name, MAP_TYPE type,
                            char **map)
{
    l_map_t *node = malloc(sizeof(l_map_t));

    if (node == NULL)
        return (NULL);
    node->name = my_strdup(name);
    node->map = map;
    node->type = type;
    node->next = NULL;
    *list = node;
    return *list;
}

l_map_t *my_put_in_list(l_map_t **list, char *name, MAP_TYPE type, char **map)
{
    if (*list == NULL) {
        return add_first_node(list, name, type, map);
    } else {
        return add_node(list, name, type, map);
    }
}

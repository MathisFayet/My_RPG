/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** list_objects
*/

#include "my_rpg.h"

object_t *empty_list_objects(object_t **objects, OBJS_TYPE type, char *filepath)
{
    object_t *new_object = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 1920, 1080};

    new_object = create_object(filepath, pos, rect);
    new_object->type = type;
    new_object->next = NULL;
    *objects = new_object;
    return (*objects);
}

object_t *put_list_back(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 1920, 1080};

    if (*objects == NULL)
        empty_list_objects(objects, type, filepath);
    tmp = *objects;
    while (tmp->next != NULL)
        tmp = tmp->next;
    new_object = create_object(filepath, pos, rect);
    new_object->type = type;
    new_object->next = NULL;
    tmp->next = new_object;
    return (*objects);
}

object_t *put_list_objects(object_t **objects, OBJS_TYPE type, char *filepath)
{
    object_t *(*fptr_objects[])(object_t **, OBJS_TYPE, char *) = {
        &put_list_back, &put_list_char_m, &put_list_char_f, &put_list_poke1,
        &put_list_poke2, &put_list_poke3, &put_list_player, &put_list_f_poke1,
        &put_list_f_poke2, &put_list_f_poke3, &put_list_f_enem1,
        &put_list_f_enem2, &put_list_f_enem3, &put_list_f_enem4,
        &put_list_f_enem5, &put_list_f_enem6, &put_list_f_enem7,
        &put_list_f_enem8, &put_list_f_enem9};

    fptr_objects[type](objects, type, filepath);
    return (*objects);
}

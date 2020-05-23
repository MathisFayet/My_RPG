/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** objects2
*/

#include "my_rpg.h"

object_t *put_list_player(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 332, 125, 166};
    sfVector2f scale = {0.7, 0.7};

    if (*objects == NULL)
        empty_list_objects(objects, type, filepath);
    tmp = *objects;
    while (tmp->next != NULL)
        tmp = tmp->next;
    new_object = create_object(filepath, pos, rect);
    sfSprite_setScale(new_object->sprite, scale);
    new_object->type = type;
    new_object->next = NULL;
    tmp->next = new_object;
    return (*objects);
}

object_t *put_list_f_poke1(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 100, 150};
    sfVector2f scale = {4.0, 4.0};

    pos.x += WINDOW_WIDTH / 5;
    pos.y = WINDOW_HEIGHT / 3.0;
    if (*objects == NULL)
        empty_list_objects(objects, type, filepath);
    tmp = *objects;
    while (tmp->next != NULL)
        tmp = tmp->next;
    new_object = create_object(filepath, pos, rect);
    sfSprite_setScale(new_object->sprite, scale);
    new_object->type = type;
    new_object->next = NULL;
    tmp->next = new_object;
    return (*objects);
}

object_t *put_list_f_poke2(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {100, 0, 100, 150};
    sfVector2f scale = {4.0, 4.0};

    pos.x += WINDOW_WIDTH / 5;
    pos.y = WINDOW_HEIGHT / 2.8;
    if (*objects == NULL)
        empty_list_objects(objects, type, filepath);
    tmp = *objects;
    while (tmp->next != NULL)
        tmp = tmp->next;
    new_object = create_object(filepath, pos, rect);
    sfSprite_setScale(new_object->sprite, scale);
    new_object->type = type;
    new_object->next = NULL;
    tmp->next = new_object;
    return (*objects);
}

object_t *put_list_f_poke3(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {200, 0, 100, 150};
    sfVector2f scale = {4.0, 4.0};

    pos.x += WINDOW_WIDTH / 5;
    pos.y = WINDOW_HEIGHT / 2.8;
    if (*objects == NULL)
        empty_list_objects(objects, type, filepath);
    tmp = *objects;
    while (tmp->next != NULL)
        tmp = tmp->next;
    new_object = create_object(filepath, pos, rect);
    sfSprite_setScale(new_object->sprite, scale);
    new_object->type = type;
    new_object->next = NULL;
    tmp->next = new_object;
    return (*objects);
}
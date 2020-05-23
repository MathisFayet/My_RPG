/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** objects
*/

#include "my_rpg.h"

object_t *put_list_char_m(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 47, 101};
    sfVector2f scale = {5.0, 5.0};

    pos.x = WINDOW_WIDTH / 3;
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

object_t *put_list_char_f(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {47, 0, 98, 101};
    sfVector2f scale = {5.0, 5.0};

    pos.x = WINDOW_WIDTH - (WINDOW_WIDTH / 3);
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

object_t *put_list_poke1(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 100, 150};
    sfVector2f scale = {2.0, 2.0};

    pos.x = WINDOW_WIDTH / 10;
    pos.y = WINDOW_HEIGHT - (WINDOW_HEIGHT / 2.5);
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

object_t *put_list_poke2(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {100, 0, 100, 150};
    sfVector2f scale = {2.0, 2.0};

    pos.x = WINDOW_WIDTH / 4;
    pos.y = WINDOW_HEIGHT - (WINDOW_HEIGHT / 2.5);
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

object_t *put_list_poke3(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {200, 0, 100, 150};
    sfVector2f scale = {2.0, 2.0};

    pos.x = WINDOW_WIDTH / 2.5;
    pos.y = WINDOW_HEIGHT - (WINDOW_HEIGHT / 2.5);
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
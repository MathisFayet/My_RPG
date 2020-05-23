/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** objects4
*/

#include "my_rpg.h"

object_t *put_list_f_enem6(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {1000, 0, 200, 200};
    sfVector2f scale = {2.5, 2.5};

    pos.x = WINDOW_WIDTH / 1.75;
    pos.y += WINDOW_HEIGHT / 10;
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

object_t *put_list_f_enem7(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {1200, 0, 200, 200};
    sfVector2f scale = {2.5, 2.5};

    pos.x = WINDOW_WIDTH / 1.75;
    pos.y += WINDOW_HEIGHT / 10;
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

object_t *put_list_f_enem8(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {1400, 0, 200, 200};
    sfVector2f scale = {2.5, 2.5};

    pos.x = WINDOW_WIDTH / 1.75;
    pos.y += WINDOW_HEIGHT / 10;
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

object_t *put_list_f_enem9(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {1600, 0, 200, 200};
    sfVector2f scale = {2.5, 2.5};

    pos.x = WINDOW_WIDTH / 1.75;
    pos.y += WINDOW_HEIGHT / 10;
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
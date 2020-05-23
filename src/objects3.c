/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** objects3
*/

#include "my_rpg.h"

object_t *put_list_f_enem1(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 200, 200};
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

object_t *put_list_f_enem2(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {200, 0, 200, 200};
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

object_t *put_list_f_enem3(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {400, 0, 200, 200};
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

object_t *put_list_f_enem4(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {600, 0, 200, 200};
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

object_t *put_list_f_enem5(object_t **objects, OBJS_TYPE type,
    char *filepath)
{
    object_t *new_object = NULL;
    object_t *tmp = NULL;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {800, 0, 200, 200};
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
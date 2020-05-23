/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** texts
*/

#include "my_rpg.h"

texts_t *put_list_texts_main_life(texts_t **list, char *str, int value,
    TEXTS_t type)
{
    texts_t *tmp = *list;
    texts_t *element = NULL;
    sfVector2f pos = {640, 0};

    if (*list == NULL)
        return (put_empty_list_texts(list, str, value, type));
    while (tmp->next != NULL)
        tmp = tmp->next;
    element = create_new_text_str(str, value, pos);
    element->type = type;
    element->clock = sfClock_create();
    element->time = sfClock_getElapsedTime(element->clock);
    element->next = NULL;
    tmp->next = element;
    return (*list);
}

texts_t *put_list_texts_other_life(texts_t **list, char *str, int value,
    TEXTS_t type)
{
    texts_t *tmp = *list;
    texts_t *element = NULL;
    sfVector2f pos = {0, 0};

    pos.x = WINDOW_WIDTH / 5.2;
    pos.y = WINDOW_HEIGHT / 6.5;
    if (*list == NULL)
        return (put_empty_list_texts(list, str, value, type));
    while (tmp->next != NULL)
        tmp = tmp->next;
    element = create_new_text_str(str, value, pos);
    sfText_setColor(element->text, sfBlack);
    element->type = type;
    element->clock = sfClock_create();
    element->time = sfClock_getElapsedTime(element->clock);
    element->next = NULL;
    tmp->next = element;
    return (*list);
}

texts_t *put_list_texts_main_name(texts_t **list, char *str, int value,
    TEXTS_t type)
{
    texts_t *tmp = *list;
    texts_t *element = NULL;
    sfVector2f pos = {0, 0};

    pos.x = WINDOW_WIDTH - (WINDOW_WIDTH / 2.9);
    pos.y = WINDOW_HEIGHT - (WINDOW_HEIGHT / 2.95);
    if (*list == NULL)
        return (put_empty_list_texts(list, str, value, type));
    while (tmp->next != NULL)
        tmp = tmp->next;
    element = create_new_text_str(str, value, pos);
    sfText_setColor(element->text, sfBlack);
    sfText_setCharacterSize(element->text, 38);
    element->type = type;
    element->clock = sfClock_create();
    element->time = sfClock_getElapsedTime(element->clock);
    element->next = NULL;
    tmp->next = element;
    return (*list);
}

texts_t *put_list_texts_other_name(texts_t **list, char *str, int value,
    TEXTS_t type)
{
    texts_t *tmp = *list;
    texts_t *element = NULL;
    sfVector2f pos = {0, 0};

    pos.x = WINDOW_WIDTH / 4.95;
    pos.y = WINDOW_HEIGHT / 8.8;
    if (*list == NULL)
        return (put_empty_list_texts(list, str, value, type));
    while (tmp->next != NULL)
        tmp = tmp->next;
    element = create_new_text_str(str, value, pos);
    sfText_setColor(element->text, sfBlack);
    sfText_setCharacterSize(element->text, 38);
    element->type = type;
    element->clock = sfClock_create();
    element->time = sfClock_getElapsedTime(element->clock);
    element->next = NULL;
    tmp->next = element;
    return (*list);
}
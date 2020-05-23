/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** list_texts
*/

#include <stdlib.h>
#include "my_rpg.h"

texts_t *create_new_text_str(char *str, int value, sfVector2f pos)
{
    texts_t *element = malloc(sizeof(texts_t));
    sfFont *f = sfFont_createFromFile("assets/font/IndieFlower-Regular.ttf");
    sfText *text = sfText_create();

    if (element == NULL)
        return (NULL);
    if (value != -1)
        sfText_setString(text, my_strcat(my_strdup(str),
            convert_to_str(value)));
    else
        sfText_setString(text, str);
    sfText_setFont(text, f);
    sfText_setCharacterSize(text, 70);
    sfText_setColor(text, sfWhite);
    sfText_setPosition(text, pos);
    element->text = text;
    element->str = my_strdup(str);
    element->value = value;
    element->next = NULL;
    return (element);
}

texts_t *put_empty_list_texts(texts_t **list, char *str, int value,
    TEXTS_t type)
{
    texts_t *element = NULL;
    sfVector2f pos = {0, 0};

    pos.x = WINDOW_WIDTH - (WINDOW_WIDTH / 2.8);
    pos.y = WINDOW_HEIGHT - (WINDOW_HEIGHT / 3) + 45;
    element = create_new_text_str(str, value, pos);
    sfText_setColor(element->text, sfBlack);
    element->clock = sfClock_create();
    element->time = sfClock_getElapsedTime(element->clock);
    element->type = type;
    element->next = NULL;
    *list = element;
    return (*list);
}

texts_t *put_list_texts(texts_t **list, char *str, int value, TEXTS_t type)
{
    texts_t *(*fptr_texts[])(texts_t **, char *, int, TEXTS_t) = {
        &put_list_texts_main_life, &put_list_texts_other_life,
        &put_list_texts_main_name, &put_list_texts_other_name};

    fptr_texts[type](list, str, value, type);
    return (*list);
}
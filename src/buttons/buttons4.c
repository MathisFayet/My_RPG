/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** buttons4
*/

#include "my_rpg.h"

buttons_t *put_list_settings_mute(buttons_t **buttons, BUTT_TYPE type,
    char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {600, 100};

    pos.x = WINDOW_WIDTH / 10;
    pos.y = WINDOW_HEIGHT / 10;
    size.x = WINDOW_WIDTH / 3;
    size.y = WINDOW_HEIGHT / 10;
    if (*buttons == NULL)
        element = empty_list_buttons(buttons, pos, size);
    else
        element = append_list_buttons(buttons, pos, size);
    while (element->next != NULL)
        element = element->next;
    element->type = type;
    element->text = create_text(text, pos, size);
    element->display = 1;
    element->callback = &settings_mute;
    return (element);
}

buttons_t *put_list_settings_more(buttons_t **buttons, BUTT_TYPE type,
    char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {600, 100};

    pos.x = WINDOW_WIDTH / 10;
    pos.y = WINDOW_HEIGHT / 4;
    size.x = WINDOW_WIDTH / 3;
    size.y = WINDOW_HEIGHT / 10;
    if (*buttons == NULL)
        element = empty_list_buttons(buttons, pos, size);
    else
        element = append_list_buttons(buttons, pos, size);
    while (element->next != NULL)
        element = element->next;
    element->type = type;
    element->text = create_text(text, pos, size);
    element->display = 1;
    element->callback = &settings_more;
    return (element);
}

buttons_t *put_list_settings_less(buttons_t **buttons, BUTT_TYPE type,
    char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {600, 100};

    pos.x = WINDOW_WIDTH / 10;
    pos.y = WINDOW_HEIGHT / 2.5;
    size.x = WINDOW_WIDTH / 3;
    size.y = WINDOW_HEIGHT / 10;
    if (*buttons == NULL)
        element = empty_list_buttons(buttons, pos, size);
    else
        element = append_list_buttons(buttons, pos, size);
    while (element->next != NULL)
        element = element->next;
    element->type = type;
    element->text = create_text(text, pos, size);
    element->display = 1;
    element->callback = &settings_less;
    return (element);
}

buttons_t *put_list_settings_interact(buttons_t **buttons, BUTT_TYPE type,
    char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {600, 100};

    pos.x = WINDOW_WIDTH / 10;
    pos.y = WINDOW_HEIGHT / 1.75;
    size.x = WINDOW_WIDTH / 3;
    size.y = WINDOW_HEIGHT / 10;
    if (*buttons == NULL)
        element = empty_list_buttons(buttons, pos, size);
    else
        element = append_list_buttons(buttons, pos, size);
    while (element->next != NULL)
        element = element->next;
    element->type = type;
    element->text = create_text(text, pos, size);
    element->display = 1;
    element->callback = &interact_key;
    return (element);
}
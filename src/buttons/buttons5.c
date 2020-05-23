/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** buttons5
*/

#include "my_rpg.h"

buttons_t *put_list_f_attack(buttons_t **buttons, BUTT_TYPE type,
    char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {600, 100};

    pos.x = WINDOW_WIDTH / 12;
    pos.y = WINDOW_HEIGHT - (WINDOW_HEIGHT / 8);
    size.x = WINDOW_WIDTH / 3.5;
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
    element->callback = &attack;
    return (element);
}

buttons_t *put_list_f_leave(buttons_t **buttons, BUTT_TYPE type,
    char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {600, 100};

    pos.x = WINDOW_WIDTH / 2;
    pos.y = WINDOW_HEIGHT - (WINDOW_HEIGHT / 8);
    size.x = WINDOW_WIDTH / 3.5;
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
    element->callback = &leave_fight;
    return (element);
}
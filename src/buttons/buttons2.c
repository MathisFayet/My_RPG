/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** buttons2
*/

#include "my_rpg.h"

buttons_t *put_list_skin_m(buttons_t **buttons, BUTT_TYPE type, char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {235, 505};

    pos.x = WINDOW_WIDTH / 3;
    if (*buttons == NULL)
        element = empty_list_buttons(buttons, pos, size);
    else
        element = append_list_buttons(buttons, pos, size);
    while (element->next != NULL)
        element = element->next;
    element->type = type;
    element->text = NULL;
    element->display = 0;
    element->callback = &skin_m;
    return (element);
}

buttons_t *put_list_skin_f(buttons_t **buttons, BUTT_TYPE type, char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {235, 505};

    pos.x = WINDOW_WIDTH - (WINDOW_WIDTH / 3);
    if (*buttons == NULL)
        element = empty_list_buttons(buttons, pos, size);
    else
        element = append_list_buttons(buttons, pos, size);
    while (element->next != NULL)
        element = element->next;
    element->type = type;
    element->text = NULL;
    element->display = 0;
    element->callback = &skin_f;
    return (element);
}

buttons_t *put_list_skin_poke1(buttons_t **buttons, BUTT_TYPE type, char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {200, 300};

    pos.x = WINDOW_WIDTH / 10;
    pos.y = WINDOW_HEIGHT - (WINDOW_HEIGHT / 2.5);
    if (*buttons == NULL)
        element = empty_list_buttons(buttons, pos, size);
    else
        element = append_list_buttons(buttons, pos, size);
    while (element->next != NULL)
        element = element->next;
    element->type = type;
    element->text = create_text(text, pos, size);
    element->display = 0;
    element->callback = &skin_poke1;
    return (element);
}

buttons_t *put_list_skin_poke2(buttons_t **buttons, BUTT_TYPE type, char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {200, 300};

    pos.x = WINDOW_WIDTH / 4;
    pos.y = WINDOW_HEIGHT - (WINDOW_HEIGHT / 2.5);
    if (*buttons == NULL)
        element = empty_list_buttons(buttons, pos, size);
    else
        element = append_list_buttons(buttons, pos, size);
    while (element->next != NULL)
        element = element->next;
    element->type = type;
    element->text = create_text(text, pos, size);
    element->display = 0;
    element->callback = &skin_poke2;
    return (element);
}

buttons_t *put_list_skin_poke3(buttons_t **buttons, BUTT_TYPE type, char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {200, 300};

    pos.x = WINDOW_WIDTH / 2.5;
    pos.y = WINDOW_HEIGHT - (WINDOW_HEIGHT / 2.5);
    if (*buttons == NULL)
        element = empty_list_buttons(buttons, pos, size);
    else
        element = append_list_buttons(buttons, pos, size);
    while (element->next != NULL)
        element = element->next;
    element->type = type;
    element->text = create_text(text, pos, size);
    element->display = 0;
    element->callback = &skin_poke3;
    return (element);
}
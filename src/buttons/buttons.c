/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** buttons
*/

#include "my_rpg.h"

buttons_t *put_list_menu_play(buttons_t **buttons, BUTT_TYPE type, char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {600, 100};

    pos.x = WINDOW_WIDTH / 10;
    pos.y = WINDOW_HEIGHT / 10;
    size.x = WINDOW_WIDTH / 4;
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
    element->callback = &menu_launch_game;
    return (element);
}

buttons_t *put_list_menu_settings(buttons_t **buttons, BUTT_TYPE type,
    char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {600, 100};

    pos.x = WINDOW_WIDTH / 10;
    pos.y = WINDOW_HEIGHT / 4;
    size.x = WINDOW_WIDTH / 4;
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
    element->callback = &menu_settings;
    return (element);
}

buttons_t *put_list_menu_how_play(buttons_t **buttons, BUTT_TYPE type,
    char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {600, 100};

    pos.x = WINDOW_WIDTH / 10;
    pos.y = WINDOW_HEIGHT / 2.5;
    size.x = WINDOW_WIDTH / 4;
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
    element->callback = &menu_how_play;
    return (element);
}

buttons_t *put_list_menu_quit(buttons_t **buttons, BUTT_TYPE type,
    char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {600, 100};

    pos.x = WINDOW_WIDTH / 10;
    pos.y = WINDOW_HEIGHT / 1.5;
    size.x = WINDOW_WIDTH / 4;
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
    element->callback = &quit_game;
    return (element);
}

buttons_t *put_list_settings_quit(buttons_t **buttons, BUTT_TYPE type,
    char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {600, 100};

    pos.x = WINDOW_WIDTH / 10;
    pos.y = WINDOW_HEIGHT - (WINDOW_HEIGHT / 4);
    size.x = WINDOW_WIDTH / 4;
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
    element->callback = &settings_quit;
    return (element);
}
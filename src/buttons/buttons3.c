/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** buttons3
*/

#include "my_rpg.h"

buttons_t *put_list_skin_confirm(buttons_t **buttons, BUTT_TYPE type,
    char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {400, 100};

    pos.x = WINDOW_WIDTH - (WINDOW_WIDTH / 2.5);
    pos.y = WINDOW_HEIGHT - (WINDOW_HEIGHT / 3.5);
    if (*buttons == NULL)
        element = empty_list_buttons(buttons, pos, size);
    else
        element = append_list_buttons(buttons, pos, size);
    while (element->next != NULL)
        element = element->next;
    element->type = type;
    element->text = create_text(text, pos, size);
    element->display = 1;
    element->callback = &skin_confirm;
    return (element);
}

buttons_t *put_list_pause_resume(buttons_t **buttons, BUTT_TYPE type,
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
    element->callback = &menu_launch_game;
    return (element);
}

buttons_t *put_list_pause_save(buttons_t **buttons, BUTT_TYPE type,
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
    element->callback = &save_game;
    return (element);
}

buttons_t *put_list_pause_main_menu(buttons_t **buttons, BUTT_TYPE type,
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
    element->callback = &settings_quit;
    return (element);
}

buttons_t *put_list_pause_exit(buttons_t **buttons, BUTT_TYPE type,
    char *text)
{
    buttons_t *element = *buttons;
    sfVector2f pos = {0, 0};
    sfVector2f size = {600, 100};

    pos.x = WINDOW_WIDTH / 10;
    pos.y = WINDOW_HEIGHT - (WINDOW_HEIGHT / 4);
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
    element->callback = &quit_game;
    return (element);
}
/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** list_buttons
*/

#include "my_rpg.h"

buttons_t *empty_list_buttons(buttons_t **buttons, sfVector2f pos,
    sfVector2f size)
{
    buttons_t *new_button = NULL;

    new_button = create_button(pos, size);
    new_button->display = 1;
    new_button->next = NULL;
    *buttons = new_button;
    return (*buttons);
}

buttons_t *append_list_buttons(buttons_t **buttons, sfVector2f pos,
    sfVector2f size)
{
    buttons_t *new_button = NULL;
    buttons_t *tmp = *buttons;

    while (tmp->next != NULL)
        tmp = tmp->next;
    new_button = create_button(pos, size);
    new_button->display = 1;
    new_button->next = NULL;
    tmp->next = new_button;
    return (*buttons);
}

buttons_t *put_list_buttons(buttons_t **buttons, BUTT_TYPE type, char *text)
{
    buttons_t *(*fptr_buttons[])(buttons_t **, BUTT_TYPE, char *) = {
        &put_list_menu_play, &put_list_menu_settings, &put_list_menu_how_play,
        &put_list_menu_quit, &put_list_settings_quit, &put_list_skin_m,
        &put_list_skin_f, &put_list_skin_poke1, &put_list_skin_poke2,
        &put_list_skin_poke3, &put_list_skin_confirm, &put_list_pause_resume,
        &put_list_pause_save, &put_list_pause_main_menu, &put_list_pause_exit,
        &put_list_settings_mute, &put_list_settings_more,
        &put_list_settings_less, &put_list_settings_interact,
        &put_list_f_attack, &put_list_f_leave};

    fptr_buttons[type](buttons, type, text);
    return (*buttons);
}
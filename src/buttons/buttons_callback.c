/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** buttons_callback
*/

#include "my_rpg.h"

void menu_launch_game(rpg_t *my_rpg)
{
    if ((my_rpg->saved_inf->character < 1 || my_rpg->saved_inf->character > 2)
        || (my_rpg->saved_inf->main_pokemon < 1 ||
        my_rpg->saved_inf->main_pokemon > 3))
        my_rpg->game_instance = S_SKIN;
    else {
        my_rpg->game_instance = S_GAME;
    }
}

void menu_settings(rpg_t *my_rpg)
{
    my_rpg->game_instance = S_SETTINGS;
}

void menu_how_play(rpg_t *my_rpg)
{
    my_rpg->game_instance = S_HOW_PLAY;
}

void quit_game(rpg_t *my_rpg)
{
    sfRenderWindow_close(my_rpg->window->window);
}

void settings_quit(rpg_t *my_rpg)
{
    my_rpg->game_instance = S_MENU;
}

/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** events
*/

#include "my_rpg.h"

static void game_events_management(rpg_t *my_rpg, sfEvent event)
{
    if (event.key.code == sfKeyI) {
        if (my_rpg->game_instance == S_INVENTORY) {
            my_rpg->game_instance = S_GAME;
        } else {
            sfMusic_play(my_rpg->window->inventory);
            my_rpg->game_instance = S_INVENTORY;
        }
        reset_view_menu(my_rpg);
    }
    if (my_rpg->game_instance == S_INVENTORY)
        return;
    if (event.key.code == sfKeyEscape) {
        my_rpg->game_instance = S_PAUSE;
        stop_scene_music(my_rpg, S_GAME);
        reset_view_menu(my_rpg);
    }
    if (event.key.code >= sfKeyLeft && event.key.code <= sfKeyDown)
        move_player(my_rpg, (event.key.code - sfKeyLeft));
    if (event.key.code == my_rpg->saved_inf->interact)
        interaction_event(my_rpg);
}

static void check_keyboard_inputs(rpg_t *my_rpg, sfEvent event)
{
    if (event.key.code == sfKeyQ)
        sfRenderWindow_close(my_rpg->window->window);
    if ((event.key.code == sfKeySpace || event.key.code == sfKeyEnter) &&
        (my_rpg->game_instance == S_START)) {
        sfMusic_pause(my_rpg->scenes->main_music);
        my_rpg->game_instance = S_MENU;
    }
    if (my_rpg->game_instance == S_HOW_PLAY && event.key.code == sfKeyEscape)
        my_rpg->game_instance = S_MENU;
    if (my_rpg->game_instance == S_GAME ||
        my_rpg->game_instance == S_INVENTORY) {
        game_events_management(my_rpg, event);
    }
}

void analyse_events(rpg_t *my_rpg, sfEvent event)
{
    if (my_rpg->window->choose_int == 1) {
        change_interact_key(my_rpg, event);
        return;
    }
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(my_rpg->window->window);
    if (event.type == sfEvtMouseButtonPressed) {
        check_mouse_click(my_rpg, event);
    }
    if (event.type == sfEvtKeyPressed) {
        check_keyboard_inputs(my_rpg, event);
    }
}

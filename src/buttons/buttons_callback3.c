/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** buttons_callback3
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include "my_rpg.h"

void skin_confirm(rpg_t *rpg)
{
    if ((rpg->saved_inf->character > 0 && rpg->saved_inf->character <= 2)
        && (rpg->saved_inf->main_pokemon > 0 &&
        rpg->saved_inf->main_pokemon <= 3)) {
        rpg->game_instance = S_GAME;
        if ((rpg->invent = add_charact_poke(rpg, &rpg->invent)) == NULL) {
            free_all(rpg);
            exit(84);
        }
    }
}

void save_game(rpg_t *my_rpg)
{
    int fd = open(DEFAULT_SAVE, O_WRONLY | O_CREAT | O_EXCL, 0644);

    if (fd < 0 && (errno == EEXIST)) {
        fd = open(DEFAULT_SAVE, O_WRONLY);
    }
    write_in_file(my_rpg, fd);
}

void settings_mute(rpg_t *my_rpg)
{
    if (my_rpg->window->volume > 0) {
        my_rpg->window->volume = 0;
    } else {
        my_rpg->window->volume = 20;
    }
    change_music_volume(my_rpg, my_rpg->window->volume);
}

void settings_more(rpg_t *my_rpg)
{
    if (my_rpg->window->volume < 90) {
        my_rpg->window->volume += 10;
    }
    change_music_volume(my_rpg, my_rpg->window->volume);
}

void settings_less(rpg_t *my_rpg)
{
    if (my_rpg->window->volume > 10) {
        my_rpg->window->volume -= 10;
    }
    change_music_volume(my_rpg, my_rpg->window->volume);
}
/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** sounds
*/

#include "my_rpg.h"

sfMusic *create_sound(const char *filepath, int loop, int volume)
{
    sfMusic *sound = sfMusic_createFromFile(filepath);

    if (sound == NULL)
        return (NULL);
    loop == 1 ? sfMusic_setLoop(sound, sfTrue) : 0;
    volume != -1 ? sfMusic_setVolume(sound, volume) : -1;
    return (sound);
}

void play_scene_music(rpg_t *my_rpg, SCENE_TYPE type)
{
    scene_t *tmp = my_rpg->scenes;

    while (tmp != NULL) {
        if (tmp->type == type) {
            sfMusic_play(tmp->main_music);
        }
        tmp = tmp->next;
    }
}

void stop_scene_music(rpg_t *my_rpg, SCENE_TYPE type)
{
    scene_t *tmp = my_rpg->scenes;

    while (tmp != NULL) {
        if (tmp->type == type) {
            sfMusic_stop(tmp->main_music);
        }
        tmp = tmp->next;
    }
}

void change_music_volume(rpg_t *my_rpg, int volume)
{
    scene_t *tmp = my_rpg->scenes;

    while (tmp != NULL) {
        if (tmp->main_music != NULL) {
            sfMusic_setVolume(tmp->main_music, volume);
        }
        tmp = tmp->next;
    }
    sfMusic_setVolume(my_rpg->window->click, volume == 0 ? 0 : 20);
    sfMusic_setVolume(my_rpg->window->item, volume == 0 ? 0 : 20);
    sfMusic_setVolume(my_rpg->window->inventory, volume == 0 ? 0 : 20);
    sfMusic_setVolume(my_rpg->window->fight, volume == 0 ? 0 : 20);
    sfMusic_setVolume(my_rpg->window->reward, volume == 0 ? 0 : 20);
    sfMusic_setVolume(my_rpg->fight->attack, volume == 0 ? 0 : 20);
}
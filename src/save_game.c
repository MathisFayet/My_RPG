/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** save_game
*/

#include <unistd.h>
#include "my_rpg.h"

void display_infos(int fd, char *infos, char *value)
{
    write(fd, infos, my_strlen(infos));
    write(fd, value, my_strlen(value));
    write(fd, "\n", 1);
}

int write_in_file(rpg_t *my_rpg, int fd)
{
    save_t *save = my_rpg->saved_inf;

    if (fd < 0)
        return (1);
    write(fd, "SAVE_INFO_FILE\n", 15);
    display_infos(fd, "CHARACTER=", convert_to_str(save->character));
    display_infos(fd, "MAP=", my_rpg->maps->actual_map->name);
    display_infos(fd, "MAIN_POKEMON=", convert_to_str(save->main_pokemon));
    return (0);
}
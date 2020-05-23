/*
** EPITECH PROJECT, 2020
** open_dir
** File description:
** open_dir
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include "my_rpg.h"

int open_dir_fight(l_map_t **map)
{
    DIR *o = opendir("./map/room_fight");
    struct dirent *r = NULL;
    int status = 0;

    if (o == NULL)
        return (1);
    while ((r = readdir(o)) != NULL) {
        if (r->d_name[0] != '.') {
            status = add_to_linked(r->d_name, FIGHT_MAP, map,
                "./map/room_fight/");
        }
        if (status == 1)
            return (1);
    }
    closedir(o);
    return (0);
}

int open_dir_room(l_map_t **map)
{
    DIR *o = opendir("./map/room");
    struct dirent *r = NULL;
    int status = 0;

    if (o == NULL)
        return (1);
    while ((r = readdir(o)) != NULL) {
        if (r->d_name[0] != '.') {
            status = add_to_linked(r->d_name, BASIC_MAP, map, "./map/room/");
        }
        if (status == 1)
            return (1);
    }
    closedir(o);
    return (0);
}
/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** env
*/

#include "my_rpg.h"

int check_env(char **envp)
{
    int y = 0;

    if (envp == NULL || *envp == NULL)
        return (1);
    while (envp[y] != NULL) {
        if (my_strcmp(envp[y], "DISPLAY=") == 0)
            return (0);
        y += 1;
    }
    return (1);
}
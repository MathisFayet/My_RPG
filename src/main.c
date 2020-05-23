/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** main
*/

#include "my_rpg.h"

int main(int argc, char **argv, char **envp)
{
    if (check_env(envp) == 1)
        return (84);
    if ((argc != 1 && argc != 2))
        return (84);
    if (rpg(argv) == 1)
        return (84);
    return (0);
}

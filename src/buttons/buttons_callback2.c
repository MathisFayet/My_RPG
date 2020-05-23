/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** buttons_callback
*/

#include "my_rpg.h"

void skin_m(rpg_t *my_rpg)
{
    my_rpg->saved_inf->character = 1;
}

void skin_f(rpg_t *my_rpg)
{
    my_rpg->saved_inf->character = 2;
}

void skin_poke1(rpg_t *my_rpg)
{
    my_rpg->saved_inf->main_pokemon = 1;
}

void skin_poke2(rpg_t *my_rpg)
{
    my_rpg->saved_inf->main_pokemon = 2;
}

void skin_poke3(rpg_t *my_rpg)
{
    my_rpg->saved_inf->main_pokemon = 3;
}
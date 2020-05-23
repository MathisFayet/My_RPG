/*
** EPITECH PROJECT, 2020
** creat
** File description:
** creat
*/

#include <stdlib.h>
#include "my_rpg.h"

trans_t *add_to_link(char *file, sfVector2f pos, sfIntRect rect)
{
    trans_t *trans = malloc(sizeof(trans_t));

    if (trans == NULL)
        return (NULL);
    trans->position = pos;
    trans->rect = rect;
    trans->file = file;
    return (trans);
}

trans_t *add_poke(char *file, sfIntRect rect)
{
    trans_t *trans = malloc(sizeof(trans_t));
    sfVector2f pos = {720, 338};

    if (trans == NULL)
        return (NULL);
    trans->position = pos;
    trans->rect = rect;
    trans->file = file;
    return (trans);
}

trans_t *add_sprite(char *file)
{
    trans_t *trans = malloc(sizeof(trans_t));
    sfIntRect rect = {0, 0, 700, 500};
    sfVector2f pos = {660, 240};

    if (trans == NULL)
        return (NULL);
    trans->file = file;
    trans->rect = rect;
    trans->position = pos;
    return (trans);
}

invent_t *add_charactere_one(rpg_t *rpg, invent_t **invent)
{
    invent_t *status = NULL;

    if (my_put_list(invent, WINDOW, add_sprite("assets/img/inv.png")) == NULL)
        return (NULL);
    if (rpg->saved_inf->main_pokemon == 1) {
        status = my_put_list(invent, POKEMAN,
            add_poke("assets/img/main_poke.png", create_rect(0, 0, 100, 150)));
    } else if (rpg->saved_inf->main_pokemon == 2) {
        status = my_put_list(invent, POKEMAN,
            add_poke("assets/img/main_poke.png",
            create_rect(100, 0, 100, 150)));
    } else {
        status = my_put_list(invent, POKEMAN,
            add_poke("assets/img/main_poke.png",
            create_rect(200, 0, 100, 150)));
    }
    return (status);
}

invent_t *add_charact_poke(rpg_t *rpg, invent_t **invent)
{
    if (add_charactere_one(rpg, invent) == NULL)
        return (NULL);
    if (rpg->saved_inf->character == 1) {
        if (my_put_list(invent, CHARACTERE,
            add_to_link("assets/img/player1.png", create_vector(880, 338),
            create_rect(0, 0, 98, 170))) == NULL)
            return (NULL);
    }
    if (rpg->saved_inf->character == 2) {
        if (my_put_list(invent, CHARACTERE,
            add_to_link("assets/img/player2.png", create_vector(880, 338),
            create_rect(0, 0, 98, 170))) == NULL)
            return (NULL);
    }
    return (*invent);
}

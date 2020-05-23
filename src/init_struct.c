/*
** EPITECH PROJECT, 2020
** init
** File description:
** init
*/

#include <stdlib.h>
#include "my_rpg.h"

fight_t *init_strcut(rpg_t *rpg)
{
    if ((rpg->player = init_player_struct()) == NULL)
        return (NULL);
    if ((rpg->text = malloc(sizeof(text_t))) == NULL)
        return (NULL);
    if ((rpg->fight = malloc(sizeof(fight_t))) == NULL)
        return (NULL);
    rpg->fight->life_me = 100;
    rpg->fight->life_adv = 100;
    rpg->fight->attack = create_sound("assets/sound/attack.ogg", 0, 30);
}

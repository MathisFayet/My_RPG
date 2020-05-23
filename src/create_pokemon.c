/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create_pokemon
*/

#include <stdlib.h>
#include "my_rpg.h"

scene_t *get_type_scene(rpg_t *my_rpg, SCENE_TYPE type)
{
    scene_t *tmp = my_rpg->scenes;

    while (tmp != NULL) {
        if (tmp->type == type) {
            return (tmp);
        }
        tmp = tmp->next;
    }
    return (NULL);
}

void create_main_pokemon(rpg_t *my_rpg)
{
    scene_t *fight = get_type_scene(my_rpg, S_FIGHT);

    if (my_rpg->saved_inf->main_pokemon == 1) {
        put_list_texts(&fight->texts, "Tiplouf", -1, MAIN_NAME);
        put_list_objects(&fight->objects, O_F_POKE1,
            "assets/img/main_poke.png");
    } else if (my_rpg->saved_inf->main_pokemon == 2) {
        put_list_texts(&fight->texts, "Ouisticram", -1, MAIN_NAME);
        put_list_objects(&fight->objects, O_F_POKE2,
            "assets/img/main_poke.png");
    } else {
        put_list_texts(&fight->texts, "Tortipouss", -1, MAIN_NAME);
        put_list_objects(&fight->objects, O_F_POKE3,
            "assets/img/main_poke.png");
    }
}

char *get_name_enemy(OBJS_TYPE type)
{
    if (type == O_ENEMY1)
        return ("Herbizarre");
    if (type == O_ENEMY2)
        return ("Reptincel");
    if (type == O_ENEMY3)
        return ("Carabaffe");
    if (type == O_ENEMY4)
        return ("Coconfort");
    if (type == O_ENEMY5)
        return ("Arbok");
    if (type == O_ENEMY6)
        return ("Ectoplasma");
    if (type == O_ENEMY7)
        return ("Lamantine");
    if (type == O_ENEMY8)
        return ("Poissoroy");
    if (type == O_ENEMY9)
        return ("Scarabrute");
}

void create_enemy_pokemon(rpg_t *my_rpg)
{
    int random = rand() % TOTAL_POKE;
    int choosen = 0;
    scene_t *fight = get_type_scene(my_rpg, S_FIGHT);
    object_t *o_tmp = fight->objects->next;
    object_t *o_tmp_before = fight->objects;
    texts_t *t_tmp = fight->texts->next;
    texts_t *t_tmp_before = fight->texts;

    while (o_tmp != NULL) {
        if (o_tmp->type >= O_ENEMY1 && o_tmp->type <= O_ENEMY9) {
            o_tmp_before->next = NULL;
        }
        o_tmp = o_tmp->next;
        o_tmp_before = o_tmp_before->next;
    }
    while (t_tmp != NULL) {
        if (t_tmp->type == OTHER_NAME) {
            t_tmp_before->next = NULL;
        }
        t_tmp = t_tmp->next;
        t_tmp_before = t_tmp_before->next;
    }
    choosen = random + O_ENEMY1;
    put_list_objects(&fight->objects, choosen, "assets/img/pokemons.png");
    put_list_texts(&fight->texts, get_name_enemy(choosen), -1, OTHER_NAME);
}
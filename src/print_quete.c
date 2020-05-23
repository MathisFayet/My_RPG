/*
** EPITECH PROJECT, 2020
** print
** File description:
** print
*/

#include "my_rpg.h"

sfText *text_set(sfVector2f position, sfFont *font, char *name, int size)
{
    sfText *text = sfText_create();

    sfText_setPosition(text, position);
    sfText_setString(text, name);
    sfText_setFont(text, font);
    sfText_setColor(text, sfRed);
    sfText_setCharacterSize(text, size);
    return (text);
}

sfText *text_more_set(sfVector2f position, sfFont *font, char *name, int size)
{
    sfText *text = sfText_create();

    sfText_setPosition(text, position);
    sfText_setString(text, name);
    sfText_setFont(text, font);
    sfText_setColor(text, sfGreen);
    sfText_setCharacterSize(text, size);
    return (text);
}

void print_objectf2(rpg_t *rpg, sfFont *fnt)
{
    if (rpg->text->verif == 0) {
        rpg->text->text = text_set(create_vector(15, 15), fnt,
            "  First Objective  :  You have to get a potion : no / true", 50);
        sfRenderWindow_drawText(rpg->window->window, rpg->text->text, NULL);
    }
    if (rpg->text->verif == 1) {
        rpg->text->text = text_more_set(create_vector(15, 15), fnt,
            "  First Objective  :  You recovered a potion : true / true", 50);
        sfMusic_play(rpg->window->reward);
        sfRenderWindow_drawText(rpg->window->window, rpg->text->text, NULL);
    }
}

void print_objectf(rpg_t *rpg)
{
    sfFont *fnt = sfFont_createFromFile("assets/font/IndieFlower-Regular.ttf");

    if (rpg->text->verif_t == 0) {
        rpg->text->text = text_set(create_vector(15, 77), fnt,
            "Second Objective : You have to beat a Pokemon : no / true", 50);
        sfRenderWindow_drawText(rpg->window->window, rpg->text->text, NULL);
    }
    if (rpg->text->verif_t == 1) {
        rpg->text->text = text_more_set(create_vector(15, 77), fnt,
            "Second Objective : You beat a Pokemon : true / true", 50);
        sfRenderWindow_drawText(rpg->window->window, rpg->text->text, NULL);
    }
    print_objectf2(rpg, fnt);
}
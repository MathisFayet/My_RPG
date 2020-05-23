/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** update_texts
*/

#include <stdlib.h>
#include "my_rpg.h"

static void update_text(texts_t *txt, int value)
{
    char *tmp = malloc(sizeof(char) * 255);

    tmp = my_strcpy(tmp, txt->str);
    txt->time = sfClock_getElapsedTime(txt->clock);
    if (sfTime_asSeconds(txt->time) < 0.5) {
        free(tmp);
        return;
    }
    txt->value = value;
    if (value != -1) {
        tmp = my_strcat(tmp, convert_to_str(txt->value));
        sfText_setString(txt->text, tmp);
    } else {
        sfText_setString(txt->text, tmp);
    }
    free(tmp);
    sfClock_restart(txt->clock);
}

void update_texts_elements(rpg_t *my_rpg, scene_t *scene)
{
    texts_t *txt = scene->texts;

    while (txt != NULL) {
        if (txt->type == MAIN_LIFE)
            update_text(txt, my_rpg->fight->life_me);
        if (txt->type == OTHER_LIFE)
            update_text(txt, my_rpg->fight->life_adv);
        txt = txt->next;
    }
}
/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** scenes
*/

#include "my_rpg.h"

scene_t *put_list_start(scene_t **scenes, SCENE_TYPE type)
{
    scene_t *start = *scenes;

    if (*scenes == NULL)
        start = empty_list_scene(scenes, type);
    else
        start = append_list_scene(scenes, type);
    while (start->next != NULL)
        start = start->next;
    put_list_objects(&start->objects, O_BACKGROUND, "assets/img/start.jpg");
    start->main_music = create_sound("assets/sound/menu.ogg", 1, 20.0);
    sfMusic_play(start->main_music);
    return (*scenes);
}

scene_t *put_list_menu(scene_t **scenes, SCENE_TYPE type)
{
    scene_t *menu = *scenes;

    if (*scenes == NULL)
        menu = empty_list_scene(scenes, type);
    else
        menu = append_list_scene(scenes, type);
    while (menu->next != NULL)
        menu = menu->next;
    put_list_objects(&menu->objects, O_BACKGROUND, "assets/img/menu.jpg");
    put_list_buttons(&menu->buttons, B_M_GAME, "Play");
    put_list_buttons(&menu->buttons, B_M_SETTINGS, "Settings");
    put_list_buttons(&menu->buttons, B_M_HOW_PLAY, "How to play");
    put_list_buttons(&menu->buttons, B_M_QUIT, "Quit");
    return (*scenes);
}

scene_t *put_list_settings(scene_t **scenes, SCENE_TYPE type)
{
    scene_t *settings = *scenes;

    if (*scenes == NULL)
        settings = empty_list_scene(scenes, type);
    else
        settings = append_list_scene(scenes, type);
    while (settings->next != NULL)
        settings = settings->next;
    put_list_objects(&settings->objects, O_BACKGROUND, "assets/img/menu.jpg");
    put_list_buttons(&settings->buttons, B_S_MUTE, "Mute sound");
    put_list_buttons(&settings->buttons, B_S_MORE, "+ Volume");
    put_list_buttons(&settings->buttons, B_S_LESS, "- Volume");
    put_list_buttons(&settings->buttons, B_S_INTE, "Interact Key");
    put_list_buttons(&settings->buttons, B_S_QUIT, "Main Menu");
    return (*scenes);
}

void put_list_skin2(scene_t *skin)
{
    put_list_objects(&skin->objects, O_BIG_POKE1, "assets/img/main_poke.png");
    put_list_objects(&skin->objects, O_BIG_POKE2, "assets/img/main_poke.png");
    put_list_objects(&skin->objects, O_BIG_POKE3, "assets/img/main_poke.png");
    put_list_buttons(&skin->buttons, B_SKIN_POKE1, "Pokemon 1");
    put_list_buttons(&skin->buttons, B_SKIN_POKE2, "Pokemon 2");
    put_list_buttons(&skin->buttons, B_SKIN_POKE3, "Pokemon 3");
    put_list_buttons(&skin->buttons, B_SKIN_CONFIRM, "Confirmer");
}

scene_t *put_list_skin(scene_t **scenes, SCENE_TYPE type)
{
    scene_t *skin = *scenes;

    if (*scenes == NULL)
        skin = empty_list_scene(scenes, type);
    else
        skin = append_list_scene(scenes, type);
    while (skin->next != NULL)
        skin = skin->next;
    put_list_objects(&skin->objects, O_BACKGROUND, "assets/img/menu.jpg");
    put_list_objects(&skin->objects, O_BIG_SKIN_M,
        "assets/img/characters.png");
    put_list_objects(&skin->objects, O_BIG_SKIN_F,
        "assets/img/characters.png");
    put_list_buttons(&skin->buttons, B_SKIN_M, "Homme");
    put_list_buttons(&skin->buttons, B_SKIN_F, "Femme");
    put_list_skin2(skin);
    return (*scenes);
}
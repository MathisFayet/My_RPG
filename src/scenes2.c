/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** scenes
*/

#include "my_rpg.h"

scene_t *put_list_game(scene_t **scenes, SCENE_TYPE type)
{
    scene_t *game = *scenes;

    if (*scenes == NULL)
        game = empty_list_scene(scenes, type);
    else
        game = append_list_scene(scenes, type);
    while (game->next != NULL)
        game = game->next;
    put_list_objects(&game->objects, O_BACKGROUND, "assets/img/menu.jpg");
    game->main_music = create_sound("assets/sound/Route201.ogg", 1, 20.0);
    return (*scenes);
}

scene_t *put_list_inventory(scene_t **scenes, SCENE_TYPE type)
{
    scene_t *inventory = *scenes;

    if (*scenes == NULL)
        inventory = empty_list_scene(scenes, type);
    else
        inventory = append_list_scene(scenes, type);
    while (inventory->next != NULL)
        inventory = inventory->next;
    put_list_objects(&inventory->objects, O_BACKGROUND,
        "assets/img/inv_bg.jpg");
    put_list_texts(&inventory->texts, "LIFE: ", 100, MAIN_LIFE);
    return (*scenes);
}

scene_t *put_list_pause(scene_t **scenes, SCENE_TYPE type)
{
    scene_t *pause = *scenes;

    if (*scenes == NULL)
        pause = empty_list_scene(scenes, type);
    else
        pause = append_list_scene(scenes, type);
    while (pause->next != NULL)
        pause = pause->next;
    put_list_objects(&pause->objects, O_BACKGROUND, "assets/img/menu.jpg");
    put_list_buttons(&pause->buttons, B_P_RESUME, "Resume");
    put_list_buttons(&pause->buttons, B_P_SAVE, "Save");
    put_list_buttons(&pause->buttons, B_P_MENU, "Main Menu");
    put_list_buttons(&pause->buttons, B_P_EXIT, "Quit");
    return (*scenes);
}

scene_t *put_list_fight(scene_t **scenes, SCENE_TYPE type)
{
    scene_t *fight = *scenes;

    if (*scenes == NULL)
        fight = empty_list_scene(scenes, type);
    else
        fight = append_list_scene(scenes, type);
    while (fight->next != NULL)
        fight = fight->next;
    put_list_objects(&fight->objects, O_BACKGROUND, "assets/img/fight.jpg");
    put_list_texts(&fight->texts, "LIFE: ", 100, MAIN_LIFE);
    put_list_texts(&fight->texts, "LIFE: ", 100, OTHER_LIFE);
    put_list_buttons(&fight->buttons, B_F_ATTACK, "Attack");
    put_list_buttons(&fight->buttons, B_F_LEAVE, "Leave");
    return (*scenes);
}

scene_t *put_list_loose(scene_t **scenes, SCENE_TYPE type)
{
    scene_t *loose = *scenes;

    if (*scenes == NULL)
        loose = empty_list_scene(scenes, type);
    else
        loose = append_list_scene(scenes, type);
    while (loose->next != NULL)
        loose = loose->next;
    put_list_objects(&loose->objects, O_BACKGROUND, "assets/img/loose.jpg");
    put_list_buttons(&loose->buttons, B_M_QUIT, "Quit Game");
    return (*scenes);
}
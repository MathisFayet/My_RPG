/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** struct_rpg
*/

#include <stdlib.h>
#include "my_rpg.h"

window_t *init_win_sounds(window_t *win)
{
    if ((win->inventory = create_sound("assets/sound/LevelUp.ogg", 0, 20))
        == NULL)
        return (NULL);
    if ((win->item = create_sound("assets/sound/GetItems.ogg", 0, 20))
        == NULL)
        return (NULL);
    if ((win->click = create_sound("assets/sound/click.ogg", 0, 50)) == NULL)
        return (NULL);
    if ((win->fight = create_sound("assets/sound/fight.ogg", 1, 15)) == NULL)
        return (NULL);
    if ((win->reward = create_sound("assets/sound/objective.ogg", 0, 50))
        == NULL)
        return (NULL);
    if ((win->window = create_window(WINDOW_WIDTH, WINDOW_HEIGHT)) == NULL)
        return (NULL);
    return (win);
}

window_t *init_win_struct(void)
{
    window_t *win = malloc(sizeof(window_t));
    sfVector2f center = {WINDOW_WIDTH, WINDOW_HEIGHT};

    if (win == NULL)
        return (NULL);
    win->volume = 20;
    if (init_win_sounds(win) == NULL)
        return (NULL);
    win->width = center.x;
    win->height = center.y;
    win->choose_int = 0;
    if ((win->view = sfView_create()) == NULL)
        return (NULL);
    sfView_setSize(win->view, center);
    center.x /= 2;
    center.y /= 2;
    sfView_setCenter(win->view, center);
    return (win);
}

scene_t *init_scene_struct2(scene_t *scenes)
{
    if ((scenes = put_list_scene(&scenes, S_INVENTORY)) == NULL)
        return (NULL);
    if ((scenes = put_list_scene(&scenes, S_PAUSE)) == NULL)
        return (NULL);
    if ((scenes = put_list_scene(&scenes, S_FIGHT)) == NULL)
        return (NULL);
    if ((scenes = put_list_scene(&scenes, S_LOOSE)) == NULL)
        return (NULL);
    return (scenes);
}

scene_t *init_scene_struct(void)
{
    scene_t *scenes = NULL;

    if ((scenes = put_list_scene(&scenes, S_START)) == NULL)
        return (NULL);
    if ((scenes = put_list_scene(&scenes, S_MENU)) == NULL)
        return (NULL);
    if ((scenes = put_list_scene(&scenes, S_SETTINGS)) == NULL)
        return (NULL);
    if ((scenes = put_list_scene(&scenes, S_HOW_PLAY)) == NULL)
        return (NULL);
    if ((scenes = put_list_scene(&scenes, S_SKIN)) == NULL)
        return (NULL);
    if ((scenes = put_list_scene(&scenes, S_GAME)) == NULL)
        return (NULL);
    if (init_scene_struct2(scenes) == NULL)
        return (NULL);
    return (scenes);
}

rpg_t *init_rpg_struct(save_t *save_inf)
{
    rpg_t *new_struct = malloc(sizeof(rpg_t));

    if (new_struct == NULL)
        return (NULL);
    new_struct->game_instance = S_START;
    if ((new_struct->saved_inf = save_inf) == NULL)
        return (NULL);
    if ((new_struct->window = init_win_struct()) == NULL)
        return (NULL);
    if ((new_struct->maps = init_maps_struct()) == NULL)
        return (NULL);
    if ((new_struct->scenes = init_scene_struct()) == NULL)
        return (NULL);
    if (init_strcut(new_struct) == NULL)
        return (NULL);
    new_struct->text->verif = 0;
    new_struct->text->verif_t = 0;
    new_struct->invent = NULL;
    return (new_struct);
}

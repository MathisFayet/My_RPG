/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** rpg
*/

#include "my_rpg.h"

int game_loop(rpg_t *my_rpg)
{
    sfEvent event;

    if (my_rpg == NULL)
        return (1);
    if ((my_rpg->invent = add_charact_poke(my_rpg, &my_rpg->invent)) == NULL)
        return (1);
    while (sfRenderWindow_isOpen(my_rpg->window->window)) {
        while (sfRenderWindow_pollEvent(my_rpg->window->window, &event)) {
            analyse_events(my_rpg, event);
        }
        sfRenderWindow_clear(my_rpg->window->window, sfBlack);
        check_mouse_position(my_rpg);
        scenes_management(my_rpg);
        sfRenderWindow_setView(my_rpg->window->window, my_rpg->window->view);
        sfRenderWindow_display(my_rpg->window->window);
    }
    return (0);
}

int rpg(char **argv)
{
    rpg_t *my_rpg = NULL;
    save_t *save_inf = NULL;

    if (argv != NULL && argv[1] != NULL) {
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            return (print_usage(argv[0]));
        } else {
            save_inf = create_save_inf(argv[1]);
        }
    } else
        save_inf = init_inf_struct();
    if ((my_rpg = init_rpg_struct(save_inf)) == NULL)
        return (1);
    if (game_loop(my_rpg) == 1) {
        free_all(my_rpg);
        return (1);
    }
    free_all(my_rpg);
    return (0);
}

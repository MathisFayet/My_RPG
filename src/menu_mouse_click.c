/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** menu_mouse_click
*/

#include "my_rpg.h"

void change_button_color(rpg_t *my_rpg, buttons_t *button)
{
    sfClock *clock = sfClock_create();
    sfTime time = sfClock_getElapsedTime(clock);

    if (button->display != 1)
        return;
    sfText_setColor(button->text, sfColor_fromRGBA(0, 160, 255, 255));
    sfRenderWindow_drawText(my_rpg->window->window, button->text, NULL);
    sfRenderWindow_display(my_rpg->window->window);
    while (sfTime_asSeconds(time) < 0.3) {
        time = sfClock_getElapsedTime(clock);
    }
    sfText_setColor(button->text, sfBlack);
}

void buttons_mouse_click(rpg_t *my_rpg, scene_t *scene, sfEvent event)
{
    buttons_t *buttons = scene->buttons;

    while (buttons != NULL) {
        if (button_is_clicked(buttons, event.mouseButton) == 1) {
            change_button_color(my_rpg, buttons);
            buttons->callback(my_rpg);
        }
        buttons = buttons->next;
    }
}
/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** window
*/

#include "my_rpg.h"

sfRenderWindow *create_window(unsigned int width, unsigned int height)
{
    sfRenderWindow *new_window;
    sfVideoMode window_mode;

    window_mode.width = width;
    window_mode.height = height;
    window_mode.bitsPerPixel = 32;

    if ((new_window = sfRenderWindow_create(window_mode,
        "Best RPG ever seen on this planet!", sfDefaultStyle, NULL)) == NULL)
        return (NULL);
    sfRenderWindow_setFramerateLimit(new_window, FRAME_LIMIT);
    return (new_window);
}
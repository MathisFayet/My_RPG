/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** convertir
*/

#include <stdlib.h>
#include "my_rpg.h"

static int size_word(int nb)
{
    int i = 0;

    while (nb > 0) {
        nb /= 10;
        i += 1;
    }
    return (i);
}

char *convert_to_str(int nb)
{
    int i = 0;
    char *buffer = NULL;

    if (nb == 0)
        return ("0");
    if ((buffer = malloc(sizeof(char) * (size_word(nb) + 1))) == NULL)
        return (NULL);
    while (nb > 0) {
        buffer[i] = (nb % 10) + 48;
        nb /= 10;
        i += 1;
    }
    buffer[i] = '\0';
    buffer = my_revstr(buffer);
    return (buffer);
}

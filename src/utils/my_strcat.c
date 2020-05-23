/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** my_strcat
*/

#include <unistd.h>

int my_strlen(char *);

char *my_strcat(char *dest, char const *src)
{
    int index = 0;
    int len = 0;

    if (src == NULL || dest == NULL)
        return (NULL);
    len = my_strlen(dest);
    while (src[index] != '\0'){
        dest[len + index] = src[index];
        index += 1;
    }
    dest[len + index] = '\0';
    return (dest);
}
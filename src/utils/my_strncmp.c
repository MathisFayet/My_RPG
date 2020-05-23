/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** compare a string to another, character by character
*/

#include <unistd.h>

int my_strncmp(char const *s1, char const *s2, int max)
{
    int i = 0;

    if (s1 == NULL || s2 == NULL)
        return (-2);
    while (s1[i] != '\0' && s2[i] != '\0' && i < max) {
        if (s2[i] > s1[i])
            return (-1);
        if (s2[i] < s1[i])
            return (1);
        i++;
    }
    return (0);
}
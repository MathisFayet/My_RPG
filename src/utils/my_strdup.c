/*
** EPITECH PROJECT, 2020
** str
** File description:
** str
*/

#include <stdlib.h>

char *my_strcpy(char *dest, char *src);

int my_strlen(const char *str);

char *my_strdup(char *src)
{
    int len = (my_strlen(src) + 1);
    char *str = malloc(sizeof(char) * (len + 1));

    if (str == NULL)
        return (NULL);
    str = my_strcpy(str, src);
    return (str);
}

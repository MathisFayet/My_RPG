/*
** EPITECH PROJECT, 2020
** open
** File description:
** read
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "my_rpg.h"

char *open_map(char *av)
{
    int fd = -1;
    struct stat nb;
    char *buffer = NULL;
    int result = 0;

    if (av == NULL)
        return (NULL);
    fd = open(av, O_RDONLY);
    if (fd < 0)
        return (NULL);
    stat(av, &nb);
    if ((buffer = malloc(sizeof(char) * (nb.st_size + 1))) == NULL)
        return (NULL);
    if ((result = read(fd, buffer, nb.st_size)) < 0)
        return (NULL);
    buffer[result] = '\0';
    return (buffer);
}

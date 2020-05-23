/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** save_inf
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_rpg.h"

save_t *init_inf_struct(void)
{
    save_t *info = malloc(sizeof(save_t));

    info->character = 0;
    info->main_pokemon = 0;
    info->map = '\0';
    info->interact = sfKeyO;
    return (info);
}

char *can_open_read(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    int read_bytes = 0;
    char *buffer = NULL;
    struct stat s;

    if (fd < 0)
        return (NULL);
    stat(filepath, &s);
    if ((buffer = malloc(sizeof(char) * (s.st_size + 1))) == NULL)
        return (NULL);
    if ((read_bytes = read(fd, buffer, s.st_size)) <= 0)
        return (NULL);
    buffer[read_bytes] = '\0';
    return (buffer);
}

void get_inf_line_per_line(save_t *inf_struct, char *line)
{
    if (my_strncmp(line, "CHARACTER=", 10) == 0)
        inf_struct->character = my_getnbr(line);
    if (my_strncmp(line, "MAP=", 4) == 0)
        inf_struct->map = get_map_info(line);
    if (my_strncmp(line, "MAIN_POKEMON=", 13) == 0)
        inf_struct->main_pokemon = my_getnbr(line);
}

int get_save_inf(save_t *inf_struct, char **array)
{
    int y = 0;

    if (my_strncmp(array[0], "SAVE_INFO_FILE", 14) != 0)
        return (1);
    while (array[y + 1] != NULL) {
        get_inf_line_per_line(inf_struct, array[y]);
        y += 1;
    }
    return (0);
}

save_t *create_save_inf(char *filepath)
{
    save_t *inf_struct = NULL;
    char *buffer = NULL;
    char **array = NULL;

    if ((buffer = can_open_read(filepath)) == NULL)
        return (NULL);
    if ((array = my_str_to_word_array(buffer, '\n')) == NULL)
        return (NULL);
    if ((inf_struct = init_inf_struct()) == NULL)
        return (NULL);
    if (get_save_inf(inf_struct, array) == 1)
        return (NULL);
    return (inf_struct);
}
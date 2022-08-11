/*
** EPITECH PROJECT, 2020
** strstr
** File description:
** tsk5
*/

#include <stddef.h>
#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int len = my_strlen(to_find);

    for (int i = 0; str[i] != '\0'; i++) {
        if (my_strncmp(&str[i], to_find, len) == 0)
            return (&str[i]);
    }
    return (NULL);
}

/*
** EPITECH PROJECT, 2018
** my_strdup.c
** File description:
** yes
*/

#include "my.h"
#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *dest;
    int count = 0;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[count] != '\0')
    {
        dest[count] = src[count];
        count++;
    }
    dest[count] = '\0';
    return (dest);
}

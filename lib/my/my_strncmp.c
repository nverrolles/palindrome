/*
** EPITECH PROJECT, 2020
** strncmp
** File description:
** task7
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    if (my_strlen(s1) < n ||  my_strlen(s2) < n)
        return (-1);
    for (int count = 0; count < n; count++)
        if (s1[count] != s2[count])
            return (1);
    return (0);
}

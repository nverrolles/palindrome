/*
** EPITECH PROJECT, 2020
** str to word array
** File description:
** task4
*/

#include <stddef.h>
#include <stdlib.h>
#include "my.h"

char **my_str_to_word_array(char const *str)
{
    int y = word_nb(str);
    char **tab = malloc(sizeof(char *) * (y + 1));
    int i = 0;
    int x = 0;

    for (int z = 0; i < y; z++) {
        while (is_alphanum(str[z]) == 1)
            z++;
        if (is_alphanum(str[z]) == 0)
            tab[i] = malloc(sizeof(char) * (word_len(str, z) + 1));
        while (str[z] != '\0' && is_alphanum(str[z]) == 0) {
            tab[i][x] = str[z];
            z++;
            x++;
        }
        tab[i][x] = '\0';
        i++;
        x = 0;
    }
    tab[i] = NULL;
    return tab;
}

int word_len(char const *str, int i)
{
    int len = 0;

    while (str[i] != '\0') {
        if (is_alphanum(str[i]) == 1)
            return len;
        len++;
        i++;
    }
    return len;
}

int is_alphanum(char test)
{
    if ((test >= '0' && test <= '9') || (test >= 'A' && test <= 'Z')
    || (test >= 'a' && test <= 'z'))
        return (0);
    else
        return (1);
}

int word_nb(char const *str)
{
    int i = 0;
    int word = 0;

    while (str[i] != '\0') {
        if (is_alphanum(str[i]) == 0 && is_alphanum(str[i + 1]) == 1)
            word++;
        i++;
    }
    return word;
}

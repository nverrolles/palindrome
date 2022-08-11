/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** palindrome
*/

#include "pal.h"

char *addinf(char *nbr, pal_t data)
{
    char *res = malloc(sizeof(char) * strlen(nbr) + 2);
    int n = strlen(nbr) - 1;
    int ret = 0;
    int i = 0;

    for (int tmp = 0; nbr[i] != '\0'; i++, n--) {
        tmp = (nbr[i] - 48) + (nbr[n] - 48) + ret;
        ret = 0;
        if (tmp >= data.base) {
            ret = 1;
            tmp -= data.base;
        }
        res[i] = tmp + 48;
    }
    if (ret == 1) {
        res[i] = 49;
        i++;
    }
    res[i] = '\0';
    free(nbr);
    return my_revstr(res);
}

int greater(char *nbr, char *res)
{
    if (strlen(nbr) > strlen(res))
        return -1;
    else if (strlen(nbr) < strlen(res))
        return 1;
    else
        for (int i = 0; nbr[i] != '\0'; i++) {
            if (nbr[i] > res[i])
                return -1;
            if (nbr[i] < res[i])
                return 1;
        }
    return 0;
}

void vivalalgerie(char *one, char *two, char *three)
{
    free(one);
    free(two);
    free(three);
}

int check_pal(char *str)
{
    int n = strlen(str) - 1;

    for (int i = 0; i < (my_strlen(str) / 2); i++) {
        if (str[i] != str[n])
            return 1;
        else
            n--;
    }
    if (strlen(str) == 2 && str[0] != str[1])
        return 1;
    return 0;
}
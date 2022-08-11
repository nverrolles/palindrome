/*
** EPITECH PROJECT, 2021
** palllla
** File description:
** plaindorme
*/

#include "pal.h"

int nbr_to_target(char *nbr, char *tmp, pal_t data)
{
    int it_nb = 0;
    char *mem = my_strdup(tmp);

    if (data.base != 10) {
        nbr = put_to_base(nbr, data);
        tmp = put_to_base(tmp, data);
    }
    for (; it_nb < data.imax; it_nb++) {
        if ((my_strcmp(nbr, tmp) == 0 || greater(nbr, tmp) == 1) && it_nb >=
                                                                    data.imin)
            break;
        tmp = addinf(tmp, data);
    }
    if (my_strcmp(tmp, nbr) == 0) {
        free(tmp);
        return found_solution(mem, data, it_nb, nbr);
    }
    vivalalgerie(nbr, tmp, mem);
    return 0;
}

int found_solution(char *mem, pal_t data, int it_nb, char *nbr)
{
    if (data.base != 10)
        printf("%s leads to %d in %d iteration(s) in base %d\n", mem,
                my_getnbr_base(nbr, data.base), it_nb, data.base);
    else
        printf("%s leads to %s in %d iteration(s) in base %d\n", mem, nbr,
                it_nb, data.base);
    free(nbr);
    free(mem);
    return 1;
}

void all_pal_nbr(int nbr, pal_t data)
{
    int tmp = 1;
    int solu = 0;

    while (nbr >= tmp) {
        solu += nbr_to_target(int_to_str(nbr), int_to_str(tmp), data);
        tmp++;
    }
    if (solu == 0)
        printf("no solution\n");
}
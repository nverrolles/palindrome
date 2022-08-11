/*
** EPITECH PROJECT, 2021
** pal
** File description:
** pall
*/

#include "pal.h"

void pal_nbr(char *nbr, pal_t data)
{
    int it_nb = 0;
    char *start = my_strdup(nbr);

    if (data.base != 10)
        nbr = put_to_base(nbr, data);
    while (it_nb < data.imax) {
        if (check_pal(nbr) == 0 && it_nb >= data.imin)
            break;
        nbr = addinf(nbr, data);
        it_nb++;
    }
    if (data.base != 10)
        printf("%s leads to %d in %d iteration(s) in base %d\n", start,
                my_getnbr_base(nbr, data.base), it_nb, data.base);
    else
        printf("%s leads to %s in %d iteration(s) in base %d\n", start, nbr,
                it_nb, data.base);
    free(nbr);
    free(start);
}
/*
** EPITECH PROJECT, 2020
** compute power rec
** File description:
** task4
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    int res = nb;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    res = nb * my_compute_power_rec(nb, p - 1);
    return res;
}

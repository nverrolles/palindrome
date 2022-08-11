/*
** EPITECH PROJECT, 2020
** compute it recursive
** File description:
** task 02
*/

#include "my.h"

int my_compute_factorial_rec(int nb)
{
    int fact = 1;

    if (nb == 1)
        return nb;
    if (nb == 0)
        return 1;
    if (nb < 0 || nb > 12)
        return 0;
    fact = nb * my_compute_factorial_rec(nb - 1);
    return fact;
}

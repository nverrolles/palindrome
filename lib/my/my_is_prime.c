/*
** EPITECH PROJECT, 2020
** is prime ?
** File description:
** task6
*/

#include "my.h"

int my_is_prime(int nb)
{
    if (nb == 2)
        return 1;
    if (nb < 2 || nb % 2 == 0)
        return 0;
    for (int i = 3; i * i <= nb; i += 2) {
        if (nb % i == 0)
            return 0;
    }
    return 1;
}

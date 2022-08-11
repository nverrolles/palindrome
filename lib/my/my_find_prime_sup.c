/*
** EPITECH PROJECT, 2020
** find prim sup
** File description:
** task 7
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    if (nb < 2)
        return 2;
    if (nb > 2 && nb % 2 == 0)
        nb++;
    while (!my_is_prime(nb))
        nb += 2;
    return (nb);
}

/*
** EPITECH PROJECT, 2020
** compute square root
** File description:
** task5
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int root = 0;

    if (nb < 0)
        return 0;
    while (root * root != nb) {
        if (root > nb)
            return 0;
        root++;
    }
    return root;
}

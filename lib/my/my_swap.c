/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** task1
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}
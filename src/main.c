/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** palindrome
*/

#include "pal.h"

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        print_help();
        return 0;
    }
    check_error(ac, av);
    flag_sorter(ac, av);
    return 0;
}

void print_help(void)
{
    printf("USAGE\n"
    "    ./palindrome -n number -p palindrome [-b base] "
    "[-imin i] [-imax i]\n"
    "DESCRIPTION\n"
    "    -n n      integer to be transformed (>=0)\n"
    "    -p pal    palindromic number to be obtained "
    "    (incompatible with the -n\n"
    "\t      option) (>=0)\n"
    "\t      if defined, all fitting values of n will be output\n"
    "    -b base   base in which the procedure will "
    "be executed (1<b<=10) [def: 10]\n"
    "    -imin i   minimum number of iterations, included (>=0) [def: "
    "0]\n"
    "    -imax i   maximum number of iterations, included (>=0) [def: "
    "100]\n");
}

char *int_to_str(int nb)
{
    char *res = NULL;
    int mem = 0;
    int tmp = 0;

    for (int i = 1; i < nb; i *= 10)
        mem++;
    res = malloc(sizeof(char) * (mem + 2));
    mem = nb;
    for (int i = 1; i <= mem; i *= 10) {
        res[tmp] = nb % 10 + 48;
        nb -= nb % 10;
        nb = nb / 10;
        tmp++;
    }
    if (nb != 0) {
        res[tmp] = nb + 48;
        res[tmp + 1] = '\0';
    } else
        res[tmp] = '\0';
    return my_revstr(res);
}


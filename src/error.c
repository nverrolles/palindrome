/*
** EPITECH PROJECT, 2021
** palpal
** File description:
** pal
*/

#include "pal.h"

void check_error(int ac, char **av)
{
    (ac < 3) ? exit (84): 0;
    if (my_strcmp(av[1], "-p") != 0 && (my_strcmp(av[1], "-n") != 0)) {
        printf("invalid argument\n");
        exit(84);
    }
    for (int i = 0; i < ac; i++) {
        if (av[i][0] == '-' && (my_strcmp(av[i], "-imin") != 0 && my_strcmp
        (av[i], "-imax") != 0 && my_strcmp(av[i], "-p") != 0 &&
        my_strcmp(av[i], "-n") != 0 && my_strcmp(av[i], "-b") != 0) && (i +
        2 >= ac)) {
            printf("invalid argument\n");
            exit(84);
        }
    }
    check_option(ac, av);
}

void check_option(int ac, char **av)
{
    for (int i = 0; i < ac; i++) {
        if (((my_strcmp(av[i], "-imin") == 0) && (i == ac - 1 ||
            my_str_isnum(av[i + 1]) == 0 || greater(av[i + 1], "2147483647")
            != 1 || atoi(av[1 + i]) < 1)) || (my_strcmp(av[i], "-imax") == 0
            && (i == ac - 1 || my_str_isnum(av[i + 1]) == 0 || greater(av[i +
            1], "2147483647") != 1 || atoi(av[1 + i]) < 1)) || (my_strcmp
            (av[i], "-b") == 0 && (i == ac - 1 || my_str_isnum(av[i + 1]) == 0
            || greater(av[i + 1], "11") != 1 || atoi(av[1 + i]) < 2))) {
            printf("invalid argument\n");
            exit(84);
        }
    }
}

void check_p_option(char *nbr, pal_t data)
{
    if (data.base != 10) {
        nbr = put_to_base(nbr, data);
        if (check_pal(nbr) != 0) {
            printf("invalid argument\n");
            free(nbr);
            exit(84);
        }
        free(nbr);
    } else if (data.base == 10) {
        if (check_pal(nbr) != 0) {
            printf("invalid argument\n");
            free(nbr);
            exit(84);
        }
        free(nbr);
    }
}
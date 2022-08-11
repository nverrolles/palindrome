/*
** EPITECH PROJECT, 2021
** pla
** File description:
** pal
*/

#include "pal.h"

void flag_sorter(int ac, char **av)
{
    pal_t data = fill_data(ac, av, data);

    if (atoi(av[2]) < 1 || (data.imin > data.imax)) {
        printf("invalid argument\n");
        exit(84);
    }
    if (my_strcmp(av[1], "-n") == 0) {
        pal_nbr(my_strdup(av[2]), data);
    }
    if (my_strcmp(av[1], "-p") == 0) {
        check_p_option(my_strdup(av[2]), data);
        all_pal_nbr(atoi(av[2]), data);
    }
}

pal_t fill_data(int arg_nb, char **arg, pal_t data)
{
    data.imin = 0;
    data.imax = 100;
    data.base = 10;

    for (int i = 0; i < arg_nb; i++) {
        if (my_strcmp(arg[i], "-imin") == 0)
            data.imin = atoi(arg[i + 1]);
        if (my_strcmp(arg[i], "-imax") == 0)
            data.imax = atoi(arg[i + 1]);
        if (my_strcmp(arg[i], "-b") == 0)
            data.base = atoi(arg[i + 1]);
    }
    return data;
}
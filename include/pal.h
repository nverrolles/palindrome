/*
** EPITECH PROJECT, 2021
** pal
** File description:
** pal
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "my.h"

typedef struct pal
{
    int imin;
    int imax;
    int base;
}pal_t;

#ifndef PAL
#define PAL

int found_solution(char *mem, pal_t data, int it_nb, char *nbr);
void check_option(int ac, char **av);
void print_help();
void check_p_option(char *nbr, pal_t data);
int check_pal(char *str);
void pal_nbr(char *nbr, pal_t data);
char *addinf(char *nbr, pal_t data);
pal_t fill_data(int arg_nb, char **arg, pal_t data);
void flag_sorter(int ac, char **av);
char *int_to_str(int nb);
void all_pal_nbr(int nbr, pal_t data);
char *int_to_str(int nb);
int nbr_to_target(char *nbr, char *tmp, pal_t data);
void vivalalgerie(char *one, char *two, char *three);
int greater(char *nbr, char *res);
char *put_to_base(char *nbr, pal_t data);
void check_error(int ac, char **av);

#endif
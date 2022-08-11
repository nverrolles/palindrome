/*
** EPITECH PROJECT, 2020
** prototypes
** File description:
** lib
*/

#include <stdarg.h>
#include <stdio.h>

int my_printf(char *, ...);
int check_mod(char *, int);
int my_putnbr_base(int, char const *);
int check_print(char *, int, va_list, int);
int my_putstr_printable(char *);
int print_one_char(char *, int);
int flag_len(char *, int);
int my_print_unpritable(char);
int print_longer(char *, int, int, va_list);
int my_put_shortnbr(short);
int my_put_longlongnbr(long long int);
int my_put_longnbr(long int);
int my_putchar_signed(signed char);
int check_other_flag(char *, int, va_list, int);
int my_getnbr(char const *);
char *my_strdup(char const *);
char *my_strcpy(char *, char const *);
char *my_strncpy(char *, char const *, int);
char *my_revstr(char *);
char *my_strstr(char *, char const *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
char *my_strupcase(char *);
char *my_strlowcase(char *);
char *my_strcapitalize(char *);
int my_str_isalpha(char const *);
int my_str_isnum(char const *);
int my_str_islower(char const *);
int my_str_isupper(char const *);
int my_str_isprintable(char const *);
int my_strlen(char const *);
int my_getnbr_base(char const *, int);
int my_putnbr_base(int, char const *);
void my_putchar(char);
int my_showstr(char const *);
int my_showmem(char const *, int);
void print_zero(char const *, int);
int my_compute_factorial_it(int);
int my_compute_factorial_rec(int);
int my_compute_power_it(int, int);
int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_is_prime(int);
int my_find_prime_sup(int);
int my_putstr(char const *);
void my_print_params(int, char **);
char *my_strdup(char const *);
int my_tab_size(int, char **);
char *concat_params(int, char **);
int my_show_word_array(char * const *);
char **my_str_to_word_array(char const *);
int word_len(char const *, int);
int is_alphanum(char);
int word_nb(char const *);
int my_put_nbr(int);
void my_sort_int_array(int *, int);
char *my_strcat(char *, char const *);
char *my_strncat(char *, char const *, int);
void my_swap(int *, int *);

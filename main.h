#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <limits.h>
#include <stdlib.h>

 typedef struct fmsp
    {
        char flag;
        int (*fg)();
    }fmsp;
int _putchar(char c);
int char_print(va_list ap);
int print_per(int p);
int str_print(va_list ap);
int print_int(va_list args);
char *get_fmsp_func(char *s, va_list ap);
int print_rev(va_list args);
int print_number(int n);
int _printf(const char *format, ...);
int check_formatter(va_list args, const char *format, fmsp spec[]);

#endif /* MAIN_H */

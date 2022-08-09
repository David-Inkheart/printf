#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <limits.h>
#include <stdlib.h>

int _printf(const char *format, ...);

 typedef struct fmsp
    {
        char *flag;
        char *(*fg)(va_list ap);
    }fmsp;
int _putchar(char c);
char *char_print(va_list ap);
char *percent_print(va_list ap);
char *str_print(va_list ap);
char* (*get_fmsp_func(char *s))(va_list ap);
#endif /* MAIN_H */

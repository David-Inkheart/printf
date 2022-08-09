#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

 typedef struct fmsp
    {
        char flag;
        char *(*fg)(va_list ap);
    }fmsp;
char *char_print(va_list ap);
char *percent_print(va_list ap);
char *str_print(va_list ap);
#endif /* MAIN_H */

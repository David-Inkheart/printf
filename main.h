#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

 typedef struct fmsp
    {
        char flag;
        char *(*fg)(va_list ap);
    }fmsp;

#endif /* MAIN_H */

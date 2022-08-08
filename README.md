# _Printf Project
Creating our printf function that produces output according to a format.

- This repository includes our version of the printf function, the basic and main functions.
- This project is requested by ALX School.
---------------
**Description**
================
The printf function prints a format control string of different data types on the standard output, its roots are in the C programming language, it is a functional way to produce a precise output format for printing numerical values or ASCII characters from format specifiers that have been passed on in the argument.

**Prototype**
=================
This _printf function produces output according to a format:

    int _printf(const char *format, ...);

**Formats**
=================
|flag|function|
|--|--|
|%c|print a single character|
|%s|print a string|
|%d|print a integer as a signed decimal (base 10) number|
|%i|print same as "d", integer in base 10|

**Compilation**
====================
To compile a file with the function is necessary to add all the .c files involved in the program (functions, main files, etc). Your code will be compiled this way:

    gcc -Wall -Werror -Wextra -pedantic *.c -o name_of_executable

To execute: `./name_of_executable`

**Files Description**
======

The _printf function produces output according to a format:

|file|description|
|--|--|
|*main.h*|Contain the struct and prototypes to the _printf function|
|*man_3_printf*|Contain the man page of the _printf function with all its specifications|
|*_printf.c*|Contain the main function of the _printf


**Authors**
=========
-David Okolie
-Ukanwoke Philip

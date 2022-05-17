#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdint.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
int _putchar(char c);
int _strlen(const char *s, int flag);
void unsigned_integer_to_string(uint64_t integer, int base,
	int capitalflag, char *buffer);
void signed_integer_to_string(int64_t integer, int base,
	int capitalflag, char *buffer);
void v_printf(const char *format, va_list args);
void switchFunction (const char *format, va_list args);
int _printf(const char *format, ...);

#endif

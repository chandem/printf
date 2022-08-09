#ifndef _MAIN_
#define _MAIN_

#include<stdarg.h>
#include<stdlib.h>
#include<unistd.h>

int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int _printf(const char *format, ...);
char *convert_to(char representation[], unsigned int num, int base);
int function_manager(char c, va_list arg);
int _switch(char c, va_list arg);
int print_character(va_list arg);
int print_sign(va_list arg, int base);
int print_unsign(va_list arg, int base);
int print_ptr(va_list arg);
int print_rot13(va_list arg);
int print_rev(va_list arg);
int print_base16_upper_lower(va_list arg, char *representation);
int print_hex_base(va_list arg, char _case);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int loop_format(va_list arg, const char *string);
int call_function_manager(char aux, va_list arg);
int check_percent(int *flag, char aux);
int print_STR(va_list arg);
int print_str(va_list arg);
int print_unsignedIntToHex(unsigned int num, char _case);
int print_oct(va_list arg);
int print_unsignedToBinary(va_list arg);
void print_binary(unsigned int n, unsigned int *printed);

#endif

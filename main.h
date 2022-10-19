#ifndef MAIN_H
#define MAIN_H

typedef struct format_handler {
	char c;
	int (*f)(va_list)
} fh;
int _printf(const char *format, ...);
#endif


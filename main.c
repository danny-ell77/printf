#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{	
    int len;
    int len2;
   
    printf("Character:[%c]\n", 'H');
    _printf("Character:[%c]\n", 'H');

    printf("String:[%s]\n", "I am a string !");
    _printf("String:[%s]\n", "I am a string !");
    
    len2 = printf("Percent:[%%]\n");
    len = _printf("Percent:[%%]\n");
    
    printf("Len:[%d]\n", len2);
    printf("Len:[%d]\n", len);   
    return (0);
}

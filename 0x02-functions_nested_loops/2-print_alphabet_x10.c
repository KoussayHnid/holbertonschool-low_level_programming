#include "main.h"
        /**
        * main - print 10 times the alphabet
        *
        * Return: 0
        */
void print_alphabet_x10(void)
{
        int i;
        int n = 0;

        while (n < 10)
        {
                for (i = 'a'; i <= 'z'; i++)
                        putchar(i);
                putchar('\n');
                n++;
        }
}

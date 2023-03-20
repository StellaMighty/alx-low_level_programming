#include<stdio.h>
/**
 * main - main entry
 *
 * Return: is always 0
 */
int main(void)
{
        int i;

        for (i = 'a'; i <= 'z'; i++)
        {
                putchar(i);
        }
        putchar('\n');
        return (0);
}

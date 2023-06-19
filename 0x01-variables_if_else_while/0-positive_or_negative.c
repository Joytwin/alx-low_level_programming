#include <stdio.h>
/**
* main - generate random numbers to detect -ve or +ve
 *
 * Return: always (0)
 *
 */
int main(void)
{
        int n;
        5rand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
        {
                printf("%d is positie\n", n);
        }
        else if (n == 0)
        {
                pritf("%d is zero\n",);
        }
        else
        {
                printf ("%d is negative\n",);
        }
        return (0);
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - key generator
 *
 * Return: 0 on success
 */
int main(void)
{
        int key[100], i, S = 0, n;        
        srand(time(NULL));
        for (i = 0; i <= 99; i++)
        {
                key[i] = rand() % 78;
                S += (key[i] + '0');
                putchar(key[i] + 48);
                if ((2772 - S) - '0' < 78)
                {
                        n = 2772 - S - '0';
                        S += n;
                        putchar(n + '0');
                        break;
                }
	}
return (0);
}

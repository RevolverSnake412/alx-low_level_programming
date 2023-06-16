#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{printf("is %d and is greater than 5", n);
}
else if (n == 0)
{printf("is %d and is 0", n);
}
else if (n < 6 && n != 0)
{printf("is %d and is less than 6 and not 0", n);
}
return (0);
}

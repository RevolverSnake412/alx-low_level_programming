#include "main.h"
/**
 * jack_bauer - 24h format clock
 *
 * Return: 0 on success
*/
int jack_bauer(void)
{int minl, minr, hl = 48, hr = 48;
int count;
while (hl <= 50)
{minr = 48;
minl = 48;
while (minl <= 53)
{putchar(hl);
putchar(hr);
putchar(58);
putchar(minl);
putchar(minr);
putchar('\n');
if (minr == 57)
{minr = 48;
minl++;
}
else
{minr++;
}
}
if (hr == 57)
{hr = 48;
hl++;
}
else
{hr++;
}
if (hl == 50 && hr == 52)
{break;
}
}
return (0);
}

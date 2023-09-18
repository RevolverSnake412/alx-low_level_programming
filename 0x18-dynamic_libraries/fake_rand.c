#include <unistd.h>
#include <string.h>

int rand()
{
    static int i = -1;
    int values[] = {8, 8, 7, 9, 23, 74};
    i++;
    
    if (i < sizeof(values) / sizeof(values[0]))
        return values[i];
    else
        return i * i % 30000;
}

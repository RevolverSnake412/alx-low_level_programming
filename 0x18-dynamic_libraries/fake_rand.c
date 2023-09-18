#include <unistd.h>
#include <string.h>

int rand()
{
    static int hack = -1;
    int values[] = {8, 8, 7, 9, 23, 74};
    hack++;
    
    if (hack < sizeof(values) / sizeof(values[0]))
    {
        return values[hack];
    }
    else
    {
        return hack * hack % 30000;
    }
}


#include "sys/alt_stdio.h"

int main()
{
    char ch;
    alt_putstr("Hello from System on Chip\n");
    alt_putstr("Send any character\n");

    while (1)
    {
        ch=alt_getchar();
        alt_putchar(ch);
    }

    return 0;
}

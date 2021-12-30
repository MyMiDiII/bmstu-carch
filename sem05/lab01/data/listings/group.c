#include "system.h"
#include "altera_avalon_sysid_qsys.h"
#include "altera_avalon_sysid_qsys_regs.h"

int main()
{
    alt_putstr("Hello from System on Chip\n");

    int num = IORD_ALTERA_AVALON_SYSID_QSYS_ID(SYSID_QSYS_0_BASE);
    char a[5] = "0000\0";

    int i = 1;
    while(num > 0)
    {
        a[4 - i] = num % 10 + '0';
        i++;
        num /= 10;
    }

    alt_putstr(a);

    return 0;
}

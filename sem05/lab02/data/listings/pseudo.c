#define len 8
#define enroll 4
#define elem_sz 4

int _x[] = {1, 2, 3, 4, 5, 6, 7, 8};

void _start()
{
    int *x1 = _x;
    int *x20 = x1 + len;
    int x31 = 0;

    do
    {
        int x2 = x1[0];
        int x3 = x1[1];
        x31 += x2;
        x31 += x3;
        int x4 = x1[2];
        int x5 = x1[3];
        x31 += x4;
        x31 += x5;
        x1 += enroll;
    } while(x1 != x20);

    x31++;

    while(1){}
}

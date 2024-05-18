#include <stdio.h>
#include <conio.h>

void main()
{
    int a = 4, b = 5, c = 6, d = 2;
    a = b % a;
    c = 2;
    b %= d + 4;

    printf("%d %d %d", ++a, --b, --c, d);
    printf("\n%d %d %d", a, --d);
    getch();
}
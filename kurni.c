#include <stdio.h>
#include <conio.h>

void main()
{
    int i, batas, tamp;
    printf("Input : ");
    scanf("%d", &batas);

    for (i = 1; i <= batas; i++)
    {
        tamp += i;
    }
    printf("%d", tamp);

    getch();
}
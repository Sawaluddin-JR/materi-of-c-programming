#include <stdio.h>
#include <conio.h>

void main()
{
    int inp;
    printf("masukkan data: ");
    scanf("%d", &inp);
    for (int a = 1;a <= inp;a++) 
    {
        for (int b = inp;b >= a;b--)
        {
            printf(" ");
        }
        for (int c = 1;c <= (2 * a - 1);c++)
        {
            if (c %2 == 0)
            {
                printf(" ");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    getch();
}
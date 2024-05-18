#include <stdio.h>
#include <conio.h>

int main()
{
    int inp;
    printf("input :");
    scanf("%d", &inp);
    // for (int a = 1; a <= inp; a++)
    // {
    //     for (int b = 1; b <= inp; b++)
    //     {
    //         printf("(%d,%d)", a, b);
    //     }
    //     printf("\n");
    // }

    for ( int a = 1; a <= inp; a++)
    {
        for ( int b = 1; b <= inp;b++)
        {
            if( a == inp/3+2)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    getch();
}
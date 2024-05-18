#include <stdio.h>
#include <conio.h>

void main()
{
    int bts,genap,ganjil;
    printf("Input batas : ");
    scanf("%d",&bts);
    printf("\n\n");
    if(bts % 2 == 0)
    ++bts;
    //bts = bts * 2+1;
    for (int a = 1; a <= bts; a++)
    {
        for (int b = 1; b <= bts; b++)
        {
        //    if(bts % 2 == 1)
        //    {
                if(a == 1 || a == bts  || b == 1 || b == bts )
                {
                    printf("* ");
                }else if(a == bts/2+1 || b == bts/2+1)
                {
                    printf("* ");
                }else
                {
                    printf("  ");
                }
        //    }
        //     else
        //     {
        //         bts += 1;
        //         if(a == 0 || a == bts - 1 || b == 0 || b == bts - 1)
        //         {
        //             printf("* ");
        //         }else if(a == bts/2 || b == bts/2)
        //         {
        //             printf("* ");
        //         }else
        //         {
        //             printf("  ");
        //         }
        //     }         
        }
        printf("\n");
    }
    getch();
}
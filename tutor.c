#include <stdio.h>
#include <conio.h>

void main()
{
    int baris, kolom, n;

    printf("Masukkan Ordo = ");
    scanf("%d", &n);

    printf("\n");

    // for (baris = 0; baris < n; baris++)
    // {
    //     for (kolom = 0; kolom < n; kolom++)
    //     {
    //         if (baris == kolom)
    //         {
    //             printf("1 ");
    //         }
    //         else
    //         {
    //             printf("0 ");
    //         }
    //     }
    //     printf("\n");
    // }

    printf("x ");
    for (int i = 1; i <=n; i++)
    {
        printf("%d  ",i);
    }
    printf("\n");
    
    for (int a = 1; a <=n; a++)
    {
        printf("%d ",a);
        for (int b = 1; b <=n; b++)
        {
            printf(" %d ",a * b);
        }
        printf("\n");
    }
    int x = 0;
    int inp;
    int angka;
    int temp =0 ;
    printf("\n\nMasukkan angka : ");scanf("%d",& inp);
    while ( x < inp)
    {
        printf("angka ke - %d : ",x+1);
        scanf("%d",&angka);
        temp += angka;
        x++;
    }
    printf("%d ",temp);
    getch();
}
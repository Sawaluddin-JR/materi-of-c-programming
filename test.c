#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char nama[20];
    char temp[20];
    printf("Input : ");
    gets(nama);

    int panjang = strlen(nama);

    for(int a = 0; a < panjang; a++)
    {
        if( a % 2 != 0)
        {
            temp[a] = nama[a];
        }
    }

    printf("Output : ");
    for ( int b = 0; b < panjang; b++)
    {
        printf("%s ", temp[b]);
    }
    getch();
}
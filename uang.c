#include <stdio.h>
#include <conio.h>

void main()
{
    int uang, lembar, lembar1, lembar2, koin, koin1, koin2;

    printf("jumlah uang yang ingin di tukar : ");
    scanf("%d", &uang);
    lembar = uang / 5000;
    lembar1 = uang % 5000 / 2000;
    lembar2 = uang % 5000 % 2000 / 1000;
    koin = uang % 5000 % 2000 % 1000 / 500;
    koin1 = uang % 5000 % 2000 % 1000 % 500 / 200;
    koin2 = uang % 5000 % 2000 % 1000 % 500 % 200 / 100;
    printf("5000 = %d\n", lembar);
    printf("2000 = %d\n", lembar1);
    printf("1000 = %d\n", lembar2);
    printf("500  = %d\n", koin);
    printf("200  = %d\n", koin1);
    printf("100  = %d\n", koin2);
    getch();
}

#include <stdio.h>
#include <conio.h>

void main()
{
    int uang,lembar,lembar1,lembar2,lembar3,lembar4,lembar5,lembar6,koin,koin1,koin2;

    printf("memecah uang :");scanf("%i",&uang);

    lembar=uang/100000;
    lembar1=uang%100000/50000;
    lembar2=uang%50000/20000;
    lembar3=uang%50000%20000/10000;
    lembar4=uang%10000/5000;
    lembar5=uang%10000%5000/2000;
    lembar6=uang%5000%2000/1000;
    koin=uang%1000/500;
    koin1=uang%500/200;
    koin2=uang%500%200/100;

    printf("100000 :%d\n 50000:%d\n 20000:%d\n 10000:%d\n 5000:%d\n 2000:%d\n 1000:%d\n 500:%d\n 200:%d\n 100:%d\n",lembar,lembar1,lembar2,lembar3,lembar4,lembar5,lembar6,koin,koin1,koin2);
   

    getch();
}

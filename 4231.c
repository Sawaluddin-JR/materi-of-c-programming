#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,d,e;
    scanf("%d",&a);

    b = a%10/1;
    c = a%100/10;
    d = a%1000/100;
    e = a/1000;

    printf(" %d  %d  %d  %d",b,c,d,e);

    getch();
}
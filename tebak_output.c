#include <stdio.h>
#include <conio.h>

void tebak1()
{
    int a = 0,b = 2,c = 3;
    a = a + b;
    a -=c;
    c++;
    if(c < 4)
    {
        c+=21;
        b--;
        a = a++ * (a * b);
        printf("%d",a);
        printf("\n%d",b++);
        printf("\n%d",--a);
    }
    else
    {
        printf("%d",c);
        printf("%d");
    }
}

void tebak2()
{
    int x = 1, y = 0,a,b;
    while ( x > y)
    {
        for(a = 0; a <= 5;a++)
        {
            if ( a %2 == 0)
            {
                a+=2;
            }
            else
            {
                b-=1;
            }
        }
        printf("%d  ",a);
        printf("%d  ",b);
        x--;
    }
    printf("%d",x);
}

void tebak3()
{
    int angka1 = 0,angka2 = 1,angka3;

    for(int deret = 1;deret <= 5;deret++)
    {
        if(deret == 1)
        printf("%d ",angka1);

        else if(deret == 2)
        printf("%d ",angka2);

        else
        {
            angka3=angka1+angka2;
            printf("%d ",angka3);
            angka1 = angka2;
            angka2 = angka3;
        }
    }
}

void main()
{
    printf("\n\n");
    tebak1();
    printf("\n\n");
    tebak2();
    printf("\n\n");
    tebak3();
    getch();
}
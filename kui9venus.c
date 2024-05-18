#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

void soal1()
{
    int x,y;
    x = 0;
    for (int x = 1; x < 5; x++){
        if ( x < 3){
            goto z;
        }
        else{
            goto v;
        }
    }

    v :
    x = 1;
    printf("%d %d\n",--x,x + 1);
    z : 
    x = 01;
    int c = 1;
    printf("%d %d %d\n",x,c++);
    x++;
}

void soal2()
{
    int b = 0;
    while(b < 3)
    {
        if(b == 2)
        {
            continue;
        }
        if(b < 3)
        {
            printf("congratulation");
        }
        if(b < 1)
        {
            printf(",");
        }
        b++;
    }
}

void soal3()
{
    printf("ready\n");

    if(true)
    {
        printf("soal bonus ini!!");
    }
    int x = 01;
    
    switch(x)
    {
        case 0 :
            printf("\npasti benar lah");
        case 1 :    
            printf("\nInsyaallah benar");
        break;
    }    
}

void main()
{
    //soal1();
    //soal2();
    soal3();
    getch();
}
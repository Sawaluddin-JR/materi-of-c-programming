#include <stdio.h>
#include <conio.h>

void perulangan1()
{
    // int username;
    // // for (int username=0;username<=2;++username){
    //     printf("username\n");
    // }
    // if (username<=2){
    //     printf("username");
    // }else{
    //     printf("silahkan daftar ulang");
    // }

    // int batas = 5;
    // for (int start = 1; start <= batas; start++) // start;stop;step
    // {
    //     printf("%d ", start + 2);
    // }
    // strat = 2;
    // hello
    // hello
    // hello
    // hell0
    
    int batas;
    printf("masukan batas :");
    scanf("%d", &batas); // 5
    int genap = 0, ganjil = 0;

    for (int a = 0; a < batas; a++)
    {
        // printf("Genap\n");
        if (a % 2 == 0)
        {
            genap++; // 3
        }
        else
        {
            ganjil++; // 2
        }
    }
    printf("Genap  : %d\n", genap);
    printf("Ganjil : %d", ganjil);

    // a = 2;
    // Genap
    // Ganjil
    // Genap
    // Ganjil
    // Genap
}

void main()
{
    perulangan1();
    getch();
}
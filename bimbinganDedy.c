#include <stdio.h>
#include <conio.h>

void main()
{

    // char pil;
    // printf("Input karakter :");

    // pil = getche();
    // printf("\nokeee");

    int angka;
    angka = 20;
    angka += 20;        // 40
    angka -= angka + 3; // 3
    angka = angka + 2 + (2 + 1);

    int bil = 5, bil1 = 3;
    // bil %= 2;

    // int temp = bil % bil1;
    int temp;

    // int a = 3, b = 2;

    // temp = a != b;

    // printf("%d", 2 + 3);
    // printf("%d", temp);

    int a = 2, b = 3, c = 2, d = 4;

    int buffer = a == c && b > d || a == 2 && d == 4;
    printf("%d", buffer);

    getch();
    // char nama[70];
    // gets(nama);
}
#include <stdio.h>
#include <conio.h>

void main()
{
    int angka;

    angka = 30; // penugasan =
    // angka += 2;
    // angka -= 2;
    // angka *= 2;
    // angka /= 2;     // 15
    // angka = 4;      // 4
    // angka += angka; // 8
    // angka /= 2;     // 4

    // printf("input angka : ");
    // scanf("%d", &angka); // 10

    // angka += 2;

    // angka %= 2;
    // angka = angka % 2;//sisa hasil bagi
    // angka = 200 % 13;

    int angka1, tamp, angka2, angka3;

    // printf("input angka 1 : ");
    // scanf("%d", &angka); // 2
    // printf("input angka 2 : ");
    // scanf("%d", &angka1); // 2

    // printf("input angka 3 : ");
    // scanf("%d", &angka2); // 2
    // printf("input angka 3 : ");
    // scanf("%d", &angka3);

    // PERBANDINGAN
    // tamp = angka > angka1;
    // tamp = angka < angka1;
    // tamp = angka == angka1;
    // tamp = angka != angka1;
    // tamp = angka >= angka1;
    // tamp = angka <= angka1;

    printf("input angka 1 : ");
    scanf("%d", &angka); // 2
    printf("input angka 2 : ");
    scanf("%d", &angka1); // 2

    printf("input angka 3 : ");
    scanf("%d", &angka2); // 3
    printf("input angka 3 : ");
    scanf("%d", &angka3); // 2

    // LOGIKA
    // tamp = angka == angka1 && angka2 == angka3;

    // tamp = angka == angka1 || angka2 == angka3;

    tamp = angka == angka1 && angka2 > angka3 && angka != angka3;

    // printf("hasil angka 1 : %d", angka);
    // printf("hasil angka 2 : %d", angka1);

    printf("hasil : %d(benar)", tamp); // 1 = benar dan 0 = salah

    getch();
}
#include <stdio.h> //standart input output
#include <conio.h> //

// main atau bagian utama
void main()
{
    // printf("hello");
    int angka;
    float angka1;
    char karakter;
    char kalimat[20];

    printf("Input umur : ");
    scanf("%d", &angka);

    // fflush(stdin);
    printf("Tinggi badan(meter) : ");
    scanf("%f", &angka1);

    // getchar(); // agar inputan string atau karakter kebaca setelah inputan int atau float/double
    // printf("Input huruf kesukaan anda : ");
    // fflush(stdin);
    getchar();
    // karakter = getch();

    // getchar();
    printf("Input nama : ");
    gets(kalimat);

    printf("umur saya : %d\n", angka);
    printf("tinggi badan saya : %.2f\n", angka1);
    printf("Huruf saya : %c\n", karakter);
    printf("nama saya : %s\n", kalimat);

    getch();
}
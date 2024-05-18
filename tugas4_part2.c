#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

void main()
{
    int angka;
    int jml1,jml2,jml3,jml4,jml5,uang,totalb,diskon;
    int total1,total2,total3,total4,total5;
    char pil;
    char a[50] = "batu";
    char b[50] = "gunting";
    char c[50] = "kertas";
    char d[50], e[50];
    printf("\n\n\t\t\t\t~ PROGRAM KU ~");
    printf("\n\n\t\t-----------------------------------------");
    printf("\n\n\t\t\t1 - NASTED IF");
    printf("\n\n\t\t\t2 - GAME SUIT JAPAN");
    printf("\n\n\t\t\t3 - KASIR SEDERHNA");
    printf("\n\n\t\t-----------------------------------------");
    printf("\n\n\t\t\tPILIH : ");
    pil = getche();
    Sleep(7000);
    system("cls");

    switch (pil)
    {
    case '1':
        printf("\n\n\t\t\t\tNESTED IF");
        printf("\n\n\t\t-----------------------------------------");
        printf("\n\n\t\t\tInput angka : ");
        scanf("%d", &angka);

        if (angka == 0)
        {
            printf("\n\t\tini adalah angka 0");
        }
        else
        {
            if (angka % 2 == 0)
            {
                printf("\t\tIni angka genap");
                if (angka > 0)
                {
                    printf("\n\t\tIni angka positif");
                }
                else
                {
                    printf("\n\t\tIni angka negatif");
                }
            }
            else
            {
                printf("\t\tIni angka ganjil");
                if (angka > 0)
                {
                    printf("\n\t\tIni angka positif");
                }
                else
                {
                    printf("\n\t\tIni angka negatif");
                }
            }
        }
        break;
    case '2':
        printf("\n\t\t|==================================|");
        printf("\n\t\t|    ~ GAME SUIT JAPAN ~           |");
        printf("\n\t\t|==================================|");
        printf("\n\t\t|  batu                            |");
        printf("\n\t\t|  gunting                         |");
        printf("\n\t\t|  kertas                          |");
        printf("\n\t\t|==================================|");

        printf("\n\n\n\t\tplayer 1 : ");
        gets(d);
        printf("\t\tplayer 2 : ");
        gets(e);

        if (strcmp(d, a) == 0 || strcmp(d, b) == 0 || strcmp(d, c) == 0)
        {
            if (strcmp(e, a) == 0 || strcmp(e, b) == 0 || strcmp(e, c) == 0)
            {
                if (strcmp(d, e) == 0)
                {
                    printf("\n\t\tDraw");
                }
                else if (strcmp(d, a) == 0 && strcmp(e, b) == 0 || strcmp(d, b) == 0 && strcmp(e, c) == 0 || strcmp(d, c) == 0 && strcmp(e, a) == 0)
                {
                    printf("\n\t\tplayer 1 winner!!");
                }
                else
                {
                    printf("\n\t\tplayer 2 winner!!");
                }
            }
            else
            {
                printf("\n\t\tInputan player 2 tidak sesuai!!");
            }
        }
        else
        {
            printf("\n\t\tInputan player 1 tidak sesuai!!");
        }
        break;
    case '3' :
        printf("\n\t\t|====================================================|");
        printf("\n\t\t|                   ~ KASIR SEDERHANA ~              |");
        printf("\n\t\t|====================================================|");
        printf("\n\t\t|  1 - Bakso     Rp 15000     4 - Seblak     Rp 5000 |");
        printf("\n\t\t|  2 - Mie ayam  Rp 12000     5 - Mie rebus  Rp 8000 |");
        printf("\n\t\t|  3 - Mie sop   Rp 10000                            |");
        printf("\n\t\t|====================================================|");

        printf("\n\n\t\tInput jumlah Bakso      : ");scanf("%d",&jml1);
        printf("\t\tInput jumlah Mie ayam   : ");scanf("%d",&jml2);
        printf("\t\tInput jumlah  Mie sop   : ");scanf("%d",&jml3);
        printf("\t\tInput jumlah  Seblak    : ");scanf("%d",&jml4);
        printf("\t\tInput jumlah  Mie rebus : ");scanf("%d",&jml5);

        total1 = jml1*15000;
        total2 = jml2*12000;
        total3 = jml3*10000;
        total4 = jml4*5000;
        total5 = jml5*8000;

        printf("\n\n\t\tBakso     15000 x %d = %d",jml1,total1);
        printf("\n\t\tMie ayam  12000 x %d = %d",jml2,total2);
        printf("\n\t\tMie sop   10000 x %d = %d",jml3,total3);
        printf("\n\t\tSeblak    5000  x %d = %d",jml4,total4);
        printf("\n\t\tMie rebus 8000  x %d = %d",jml5,total5);

        totalb = total1+ total2 + total3 + total4 + total5;
        printf("\n\n\t\tTotal belanjaan      = %d",totalb);

        if (totalb >= 500000)
        {
            diskon = (totalb*15)/100;
            totalb = totalb - diskon;
            printf("\n\n\t\tSelamat anda mendapatkan diskon 15%%");
            printf("\n\t\tHarga setelah diskon = %d",totalb);
        }
        else if (totalb >= 300000 && totalb < 500000)
        {
            diskon = (totalb*10)/100;
            totalb = totalb - diskon;
            printf("\n\n\t\tSelamat anda mendapatkan diskon 10%%");
            printf("\n\t\tHarga setelah diskon = %d",totalb);
        }
        else if ( totalb >= 200000 && totalb < 300000)
        {
            diskon = (totalb*5)/100;
            totalb = totalb - diskon;
            printf("\n\n\t\tSelamat anda mendapatkan diskon 5%%");
            printf("\n\t\tHarga setelah diskon = %d",totalb);
        }
        else
        {
            diskon = 0;
            totalb = totalb - diskon;
        }
        printf("\n\n\t\tInput uang anda : ");scanf("%d",&uang);

        if (uang == totalb)
        {
            printf("\n\n\t\tUang anda pas!!");
        }
        else if (uang > totalb)
        {
            printf("\n\n\t\tKembalian anda : %d",uang - totalb);
        }
        else
        {
            printf("\n\n\t\tUang anda kurang : %d",totalb - uang);
        }
        break;  
    default :
        printf("\n\n\n\t\t\tTidak ada pilihan :)");
        break;      
    }
    getch();
}
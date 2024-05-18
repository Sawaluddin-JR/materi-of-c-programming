#include <stdio.h>
#include <conio.h>

int hari, mulai, minggu = 0;
void input()
{
    printf("Masukkan jumlah hari/bulan          : ");
    scanf("%d", &hari); // 30
    printf("Masukkan mulai dari hari keberapa   : ");
    scanf("%d", &mulai); // 3

    if (hari >= 28 && hari <= 31)
    {
        if (mulai >= 1 && mulai <= 7)
        {
            tampil();
        }
        else
        {
            printf("\n\nInputan mulai dari hari keberapa salah!!!\n\n");
            input();
        }
    }
    else
    {
        printf("\n\nInputan jumlah hari di dalam bulan tidak ada!!!\n\n");
        input();
    }
}

void tampil()
{
    printf("\n\nMinggu\tSenin\tSelasa\tRabu\tKamis\tJuma't\tSabtu\n");

    for (int a = 0; a < hari + mulai - 1; a++)
    { // 29
        if (a < mulai - 1)
        {
            printf("\t");
        }
        else if (a % 7 == 0)
        {
            printf("\n%d\t", a - mulai + 2);
            minggu++;
        }
        else
        {
            printf("%d\t", a - mulai + 2); // 2
        }
    }
    printf("\n\nBulan ini ada : %d hari minggu nya", minggu);
}

void main()
{
    input();
    getch();
}
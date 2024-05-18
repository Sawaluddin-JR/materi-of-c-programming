#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdbool.h>
#include <stdlib.h>

void tampil()
{
    int pil;
    char user[100], pass[100];
    int ua;
    char tam1[100], tam2[100];
    char tam3[100][100], tam4[100][100];
    int nuang[100];
    int uang;

    do
    {
        printf("Menu\n1. Tampil\n2. Tambah\n3. Hapus\n4. Update\n5. Exit\nPilih : ");
        scanf("%d", &pil);
        if (pil == 1)
        {
            // tampil
            // membuka file dan dibaca dengan r
            FILE *buz = fopen("user.txt", "r");
            while ((fscanf(buz, "%[^$]$%[^$]$%d\n", &tam1, &tam2, &uang)) != EOF)
            {
                // untuk menampilkan file
                printf("Username : %s\n", tam1);
                printf("Password : %s\n", tam2);
                printf("Uang     : %d\n", uang);
            }
            fclose(buz);
        }
        else if (pil == 2)
        {
            // tambah
            // buat nahan
            //  fflush(stdin);
            getchar();
            // membuka file
            FILE *buz = fopen("user.txt", "a");
            // while untuk menempatkan kursor difile txtnya
            // agar kursor ada dibaris terakhir
            while ((fscanf(buz, "%[^$]$%[^$]$%d\n", &tam1, &tam2, &uang)) != EOF)
            {
            }
            // untuk inputan
            printf("Masukan Username : ");
            gets(user);
            printf("Masukan Password : ");
            gets(pass);
            printf("Masukan Uang     : ");
            scanf("%d", &uang);
            // dan memasukan ke filenya
            fprintf(buz, "%s$%s$%d\n", user, pass, uang);
            fclose(buz);
        }
        else if (pil == 3)
        {
            int index = 0;
            // fflush(stdin);
            getchar();
            printf("Masukan Username : ");
            gets(user);
            FILE *buzz = fopen("user.txt", "r");
            // untuk memback up data dari file.txt ke array
            while ((fscanf(buzz, "%[^$]$%[^$]$%d\n", &tam1, &tam2, &uang)) != EOF)
            {
                // untuk memasukan ke array selain username yg tadi diinput
                if (strcmp(tam1, user) != 0)
                {
                    strcpy(tam3[index], tam1);
                    strcpy(tam4[index], tam2);
                    nuang[index] = uang;
                    index++;
                }
            }
            fclose(buzz);
            // hapus file.txt sebenarnya ada sintaknya yg simple
            // kalo mau tau cari diinternet
            FILE *buz = fopen("user.txt", "w");
            fclose(buz);
            // untuk memasukan data dari array tadi ke file.txt
            FILE *buzzz = fopen("user.txt", "a");
            for (int a = 0; a < index; a++)
            {
                fprintf(buzzz, "%s$%s$%d\n", tam3[a], tam4[a], nuang[a]);
            }
            fclose(buzzz);
        }
        else if (pil == 4)
        {
            int index = 0;
            // fflush(stdin);
            getchar();
            printf("Masukan Username : ");
            gets(user);
            printf("Masukan Password : ");
            gets(pass);
            printf("Masukan Uang     : ");
            scanf("%d", &ua);
            // membuka file dengan r
            FILE *buzz = fopen("user.txt", "r");
            while ((fscanf(buzz, "%[^$]$%[^$]$%d\n", &tam1, &tam2, &uang)) != EOF)
            {
                // untuk mengupdate data user yg dipilih
                if (strcmp(tam1, user) == 0)
                {
                    strcpy(tam3[index], user);
                    strcpy(tam4[index], pass);
                    nuang[index] = ua;
                    index++;
                }
                else
                {
                    strcpy(tam3[index], tam1);
                    strcpy(tam4[index], tam2);
                    nuang[index] = uang;
                    index++;
                }
            }
            fclose(buzz);
            // hapus file.txt sebenarnya ada sintaknya yg simple
            // kalo mau tau cari diinternet
            FILE *buz = fopen("user.txt", "w");
            fclose(buz);
            // untuk memasukan data dari array tadi ke file.txt
            FILE *buzzz = fopen("user.txt", "a");
            for (int a = 0; a < index; a++)
            {
                fprintf(buzzz, "%s$%s$%d\n", tam3[a], tam4[a], nuang[a]);
            }
            fclose(buzzz);
        }
        else if (pil == 5)
        {
            exit(0);
        }
        else
        {
            printf("Error!");
        }
    } while (true);
}
void main()
{
    tampil();
    getch();
}
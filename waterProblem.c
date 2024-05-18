#include <stdio.h>
#include <stdlib.h>
#define baris 6 // isi ember baris - 1
#define kolom 4 // isi ember kolom -1
#define role 8
#define isi 1

int ruleEmber(int X, int Y, int kondisi[baris][kolom], int cariX, int cariY, char *aksi[]);
void tabelKnowledge();

int main()
{
    int cobalagi = 1;
    while (cobalagi == 1)
    {
        tabelKnowledge();
        printf("Coba Lagi (1/0)):");
        scanf("%d", &cobalagi);
        printf("\n");
    }
    return 0;
}

void tabelKnowledge()
{
    char *listAksi[role] = {
        /*1*/ "Mengisi  penuh ember 5 Liter",
        /*2*/ "Mengisi Penuh Ember 3 Liter",
        /*3*/ "Kosongkan Ember 5 Liter",
        /*4*/ "Kosongkan Ember 3 Liter",
        /*5*/ "Tuangkan air dari Ember 3 liter ke Ember 5 liter sampai Ember 5 liter penuh",
        /*6*/ "Tuangkan air dari Ember 5 liter ke Ember 3 liter sampai Ember 3 liter penuh",
        /*7*/ "Tuangkan seluruh air dari Ember 3 liter ke Ember 5 liter",
        /*8*/ "Tuangkan seluruh air dari Ember 5 liter ke Ember 3 liter",
    };

    char *listKolom[kolom] = {""};

    int knowledgeSystem[baris][kolom] = {0};
    int hasil = 0;
    int x, y = 0;

    // ViewKnowledge(listBaris,listKolom,knowledgeSystem,kolom+1);
    printf("%20s", "Aplikasi Ember 5 L - 3 L\n");
    printf("%20s", "-----------------------------------\n\n");
    printf("Kombinasi air yang dicari Ember 5L 3L: ");
    scanf("%d%d", &x, &y);
    hasil = ruleEmber(0, 0, knowledgeSystem, x, y, listAksi);
    printf("Versi Sampel 1.0 \n");
    system("pause");
};

int ruleEmber(int X, int Y, int kondisi[baris][kolom], int cariX, int cariY, char *aksi[])
{
    int status = 0;
    int sucess = 0;
    int e4L = X;
    int e3L = Y;
    int temp2, temp, hit = 0;
    int jalanLacak[100] = {0};
    // buka Node
    ++kondisi[e4L][e3L];
    printf("kondisi awal (%d,%d) --> (%d,%d) \n", e4L, e3L, cariX, cariY);
    while (status < 1)
    { // system("pause");
        sucess = 0;
        if (e4L < baris - 1)
        {
            {
                temp = e4L;
                e4L = baris - 1;
            }
            if (kondisi[e4L][e3L] < isi)
            {
                ++kondisi[e4L][e3L];
                ++sucess;
                jalanLacak[hit] = 1;
                ++hit;
                printf("%s\n", aksi[0]);
                printf("1.(%d,%d)\n", e4L, e3L);
                if (cariX == e4L && cariY == e3L)
                {
                    status = 1;
                    break;
                }
            }
            else
                e4L = temp;
        }
        // else
        if (e3L < kolom - 1)
        {
            {
                temp = e3L;
                e3L = kolom - 1;
            }
            if (kondisi[e4L][e3L] < isi)
            {
                ++sucess;
                ++kondisi[e4L][e3L];
                jalanLacak[hit] = 2;
                ++hit;
                printf("%s\n", aksi[1]);
                printf("2.(%d,%d)\n", e4L, e3L);
                if (cariX == e4L && cariY == e3L)
                {
                    status = 1;
                    break;
                }
            }
            else
                e3L = temp;
        }
        //  else
        if (e4L > 0)
        {
            {
                temp = e4L;
                e4L = 0;
            }
            if (kondisi[e4L][e3L] < isi)
            {
                ++sucess;
                ++kondisi[e4L][e3L];
                jalanLacak[hit] = 3;
                ++hit;
                printf("%s\n", aksi[2]);
                printf("3.(%d,%d)\n", e4L, e3L);
                if (cariX == e4L && cariY == e3L)
                {
                    status = 1;
                    break;
                }
            }
            else
                e4L = temp;
        }
        // else
        if (e3L > 0)
        {
            {
                temp = e3L;
                e3L = 0;
            }
            if (kondisi[e4L][e3L] < isi)
            {
                ++sucess;
                ++kondisi[e4L][e3L];
                jalanLacak[hit] = 4;
                ++hit;
                printf("%s\n", aksi[3]);
                printf("4.(%d,%d)\n", e4L, e3L);
                if (cariX == e4L && cariY == e3L)
                {
                    status = 1;
                    break;
                }
            }
            else
                e3L = temp;
        }
        // else
        if (e4L + e3L >= baris - 1 && e3L > 0)
        {
            {
                temp = e3L;
                temp2 = e4L;
                e3L = e3L - (baris - 1 - e4L);
                e4L = baris - 1;
            }
            if (kondisi[e4L][e3L] < isi)
            {
                ++sucess;
                ++kondisi[e4L][e3L];
                jalanLacak[hit] = 5;
                ++hit;
                printf("%s\n", aksi[4]);
                printf("5.(%d,%d)\n", e4L, e3L);
                if (cariX == e4L && cariY == e3L)
                {
                    status = 1;
                    break;
                }
            }
            else
            {
                e3L = temp;
                e4L = temp2;
            }
        }
        // else
        if (e4L + e3L >= kolom - 1 && e4L > 0)
        {
            {
                temp = e4L;
                temp2 = e3L;
                e4L = e4L - (kolom - 1 - e3L);
                e3L = kolom - 1;
            }
            if (kondisi[e4L][e3L] < isi)
            {
                ++sucess;
                ++kondisi[e4L][e3L];
                jalanLacak[hit] = 6;
                ++hit;
                printf("%s\n", aksi[5]);
                printf("6.(%d,%d)\n", e4L, e3L);
                if (cariX == e4L && cariY == e3L)
                {
                    status = 1;
                    break;
                }
            }
            else
            {
                e4L = temp;
                e3L = temp2;
            }
        }
        // else
        if (e4L + e3L <= baris - 1 && e3L > 0)
        {
            {
                temp = e4L;
                temp2 = e3L;
                e4L = e4L + e3L;
                e3L = 0;
            }
            if (kondisi[e4L][e3L] < isi)
            {
                ++sucess;
                ++kondisi[e4L][e3L];
                jalanLacak[hit] = 7;
                ++hit;
                printf("%s\n", aksi[6]);
                printf("7.(%d,%d)\n", e4L, e3L);
                if (cariX == e4L && cariY == e3L)
                {
                    status = 1;
                    break;
                }
            }
            else
            {
                e4L = temp;
                e3L = temp2;
            }
        }
        // else
        if (e4L + e3L <= kolom - 1 && e4L > 0)
        {
            {
                temp = e4L;
                temp2 = e3L;
                e3L = e4L + e3L;
                e4L = 0;
            }
            if (kondisi[e4L][e3L] < isi)
            {
                ++sucess;
                ++kondisi[e4L][e3L];
                jalanLacak[hit] = 1;
                ++hit;
                printf("%s\n", aksi[7]);
                printf("8.(%d,%d)\n", e4L, e3L);
                if (cariX == e4L && cariY == e3L)
                {
                    status = 1;
                    break;
                }
            }
            else
            {
                e4L = temp;
                e3L = temp2;
            }
        }
        if (sucess == 0)
            status = 2;
    }
    if (status == isi)
    {
        printf("Jalan (%d,%d) ditemukan melalui role \n", e4L, e3L);
        for (temp = 0; temp < hit; temp++)
            printf("%d %s ", jalanLacak[temp], temp != hit - 1 ? "-" : "");
        printf("\n");
    }
    else
        printf("Tidak ada jalan untuk mencari (%d,%d) \n", cariX, cariY);
    return 1;
}





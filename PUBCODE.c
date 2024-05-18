// #include <stdio.h>
// #include <conio.h>
// //#include <windows.h>

// void tugas1()
// {
//     int a, b;
//     printf("\n\n\t\tMATEMATIKA");

//     printf("\n\n\t\tPenjumlahan");
//     printf("\n\t\tInput angka : ");
//     scanf("%d", &a);
//     printf("\t\tInput angka : ");
//     scanf("%d", &b);
//     printf("\n\t\tHasil :");
//     printf("\n\t\t%d + %d : %d", a, b, a + b);

//     printf("\n\n\t\tPengurangan");
//     printf("\n\t\tInput angka : ");
//     scanf("%d", &a);
//     printf("\t\tInput angka : ");
//     scanf("%d", &b);
//     printf("\n\t\tHasil :");
//     printf("\n\t\t%d - %d : %d", a, b, a - b);

//     printf("\n\n\t\tPerkalian");
//     printf("\n\t\tInput angka : ");
//     scanf("%d", &a);
//     printf("\t\tInput angka : ");
//     scanf("%d", &b);
//     printf("\n\t\tHasil :");
//     printf("\n\t\t%d x %d : %d", a, b, a * b);

//     printf("\n\n\t\tPembagian");
//     printf("\n\t\tInput angka : ");
//     scanf("%d", &a);
//     printf("\t\tInput angka : ");
//     scanf("%d", &b);
//     printf("\n\t\tHasil :");
//     printf("\n\t\t%d : %d : %d", a, b, a / b);

// }

// void tugas2()
// {
//     int a, b, pil;
//     printf("\n\n\t\t1.Penjumlahan\n\t\t2.Pengurangan\n\t\t3.Perkalian\n\t\t4.Pembagian\n\n");
//     printf("\t\tInput pilihan : ");
//     scanf("%d", &pil);

//     if(pil == 1)
//     {
//         printf("\n\n\t\tPenjumlahan");
//         printf("\n\t\tInput angka : ");
//         scanf("%d", &a);
//         printf("\t\tInput angka : ");
//         scanf("%d", &b);
//         printf("\n\t\tHasil :");
//         printf("\n\t\t%d + %d : %d", a, b, a + b);
//     }
//     else if(pil == 2)
//     {
//         printf("\n\n\t\tPengurangan");
//         printf("\n\t\tInput angka : ");
//         scanf("%d", &a);
//         printf("\t\tInput angka : ");
//         scanf("%d", &b);
//         printf("\n\t\tHasil :");
//         printf("\n\t\t%d - %d : %d", a, b, a - b);
//     }
//     else if(pil == 3)
//     {
//         printf("\n\n\t\tPerkalian");
//         printf("\n\t\tInput angka : ");
//         scanf("%d", &a);
//         printf("\t\tInput angka : ");
//         scanf("%d", &b);
//         printf("\n\t\tHasil :");
//         printf("\n\t\t%d x %d : %d", a, b, a * b);
//     }
//     else
//     {
//         printf("\n\n\t\tPembagian");
//         printf("\n\t\tInput angka : ");
//         scanf("%d", &a);
//         printf("\t\tInput angka : ");
//         scanf("%d", &b);
//         printf("\n\t\tHasil :");
//         printf("\n\t\t%d : %d : %d", a, b, a / b);
//     }

// }

// void tugas3()
// {

//     int batas;
//     int dex1 = 0, dex2 = 0;

//     printf("\n\nInput banyak nama : ");
//     scanf("%d", &batas);
//     getchar();
//     char nama[100][batas];
//     int tinggi[batas];
//     // nama[100][batas];
//     //tinggi[batas];

//     for ( int a = 0; a < batas; a++)
//     {

//         printf("Input nama ke - %d : ", a + 1);
//         gets(nama[a]);
//         printf("Input tinggi : ");
//         scanf("%d", &tinggi[a]);
//         getchar();
//     }

//     for ( int a = 1; a < batas; a++)
//     {
//         if ( tinggi[dex1] < tinggi[a])
//         {
//             dex1 = a;
//         }
//         if ( tinggi[dex2] > tinggi[a])
//         {
//             dex2 = a;
//         }
//     }
//     for(int i = 0; i < batas; i++)
//     {
//         printf("Orang ke %d = %s %d cm\n", i + 1, nama[i], tinggi[i]);
//     }
//     printf("Orang tertinggi adalah : %s\n", nama[dex1]);
//     printf("Orang terpendek adalah : %s\n", nama[dex2]);
// }

// void main()
// {
//     //tugas1();
//     //tugas2();
//     tugas3();
//     getch();
// }

#include <stdio.h>
#include <conio.h>
#include <string.h>
//#include <windows.h>

void main ()
{
    float tinggi;
    int berat;
    long jarak;
    char jenis_kelamin;
    char kalimat[50];
    char nama1[50];
    char nama2[50];
    char alamat[50];
    char ttl[100];
    char prodi[50];
    

    printf("\n\n\t\t\t\tTUGAS KELOMPOK 2 VENUS");
    printf("\n\n\t\t---------------------------------------------------------");
    printf("\n\n\t\tData Mahasiswa");
    printf("\n\n\t\tNama depan\t\t\t: ");
    gets(nama1);
    printf("\n\t\tNama belakang\t\t\t: ");
    gets(nama2);
    printf("\n\t\tTempat tanggal lahir\t\t: ");
    gets(ttl);
    printf("\n\t\tAlamat\t\t\t\t: ");
    gets(alamat);
    printf("\n\t\tProdi\t\t\t\t: ");
    gets(prodi);
    printf("\n\t\tJenis kelamin (p/l)\t\t: ");
    jenis_kelamin = getche();
    printf("\n\n\t\tTinggi badan (Meter)\t\t: ");
    scanf("%f",&tinggi);
    printf("\n\t\tBerat badan (Kg)\t\t: ");
    scanf("%d",&berat);
    printf("\n\t\tJarak dari alamat ke kampus (Km): ");
    scanf("%ld",&jarak);
    printf("\n\n\t\t---------------------------------------------------------");
    printf("\n\n\t\tData berhasil di input!");
    printf("\n\n\t\tNama\t: %s",strupr(nama1));
    printf("\n\n\t\tTTL\t: %s",ttl);
    printf("\n\n\t\tAlamat\t: %s",alamat);
    printf("\n\n\t\tProdi\t: %s",prodi);
    printf("\n\n\t\tJK\t: %s",jenis_kelamin);
    printf("\n\n\t\tTinggi\t: %.2f",tinggi);
    printf("\n\n\t\tBerat\t: %d",berat);
    printf("\n\n\t\tJarak\t: %ld",jarak);
    getch();
}

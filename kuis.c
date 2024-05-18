#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

// void decision1()
// {
//     // if (a > b)
//     {
//         printf("Berhasil");
//     }
//     else
//     {
//         printf("Gagal");
//     }
// }

// void decision2()
// {
//     // a = 5,b =2
//     // if (a < b)
//     {
//         printf("Mangga");
//     }
//     else if (a == 5)
//     {
//         printf("Apel");
//     }
//     else
//     {
//         printf("Kedongdong");
//     }
// }

// void decision3()
// {
//     // a > b ? printf("helo") : printf("hai");
// }

// void decision4()
// {
//     int c = 4;

//     if (c % 2 == 0)
//     {
//         printf("Genap");
//     }
//     else
//     {
//         printf("Ganjil");
//     }

//     if (c % 2 == 1)
//     {
//         printf("Ganjil");
//     }
//     if (c < 6)
//     {
//         printf("Angka anda kurang dari 6");
//     }
//     if (c == 5)
//     {
//         printf("angka anga 5");
//     }

//     a = 4;
//     if (a % 2 == 0)
//     {
//         printf("Genap");
//         if (a < 0)
//         {
//             printf("\nNegatif");
//         }
//         else
//         {
//             printf("\nPositif");
//         }
//     }
//     else
//     {
//         printf("Ganjil");
//         if (a < 0)
//         {
//             printf("\nNegatif");
//         }
//         else
//         {
//             printf("\nPositif");
//         }
//     }
// }

// void decision5()
// {
//     // ngecek tidak habis dibagi 400 = kabisat
//     // apakah tidak habis dibagi 100 = bukan kabisat
//     // apakah tidak habis dibagi 4 = kabisat
//     // selainnya = bukan kabisat

//     int thn;
//     printf("input tahun : ");
//     scanf("%d", &thn);

//     if (thn % 400 == 1)
//     {

//         printf("kabisat");
//     }
//     else if (thn % 100 == 1)
//     {

//         printf("bukan kabisat");
//     }
//     else if (thn % 4 == 1)
//     {
//         printf("kabisat");
//     }
//     else
//     {
//         printf("bukan kabisat");
//     }
// }

// void decision6()
// {
//     char username[10] = "dedy1234";
//     char username_check[10];

//     printf("Input username : ");
//     scanf("%s", &username_check);

//     if (strcmp(username, username_check) == 0)
//     {
//         printf("Login berhasil");
//     }
//     else
//     {
//         printf("Login gagal");
//     }
// }
void decision7()
{

    char username[15] = "iqbalnafis";
    char username1[15];
    char password[15] = "ikmal";
    char password1[15];

    printf("Input Username: ");
    scanf("%s", &username1);
    printf("Input Password: ");
    scanf("%s", &password1);

    if (strcmp(username, username1) == 0 && strcmp(password, password1) == 0)
    {
        printf("Login Sukses");
    }
    else
    {
        printf("Login Gagal");
        exit(0);
    }
}

void decision8()
{
    printf("1.Bakso\n2.Soto\n3.Sate\n4.Keluar\n");
    int pilih;
    printf("Pilih : ");
    scanf("%d", &pilih); // 2

    switch (pilih)
    {
    case 1:
        printf("Yang anda pilih bakso");
        break;
    case 2:
        printf("yang anda pilih soto");
        break;
    case 3:
        printf("yang anda pilih sate");
        break;
    case 4:
        // printf("hello");
        exit(0);
        break;
    default:
        printf("pilihan anda tidak ada!");
        break;
    }
}

void decision9()
{
    char name[20], alamat[25];
    char username[10], password[10];
    char username1[10], password1[10];

    printf("REGISTRASI\n");

    printf("Name             : ");
    gets(name);

    printf("Alamat           : ");
    gets(alamat);

    printf("Username         : ");
    gets(username);

    printf("Password         : ");
    gets(password);

    printf("\n\nLOGIN\n");

    printf("Input username   : ");
    gets(username1);

    printf("Input password   : ");
    gets(password1);

    if (strcmp(username, username1) == 0)
    {
        if (strcmp(password, password1) == 0)
        {
            printf("Login berhasil!!");
        }
        else
        {
            printf("Password salah!!");
        }
    }
    else
    {
        printf("Username salah!!");
    }
}

void main()
{
    // decision1();
    // decision2();
    // decision3();
    // decision4();
    // decision5();
    // decision6();
    // decision7();
    // decision8();
    decision9();

    getch();
}
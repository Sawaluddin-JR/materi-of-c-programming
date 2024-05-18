// #include <stdio.h>
// #include <conio.h>

// void soal1()
// {
//     int length,number,total = 0,total1 = 0,buffer = 0,buffer1 = 0;
//     printf("Input panjang array : ");scanf("%d",&length);
//     int angka[length];

//     for(int a = 0;a < length;a++)
//     {
//         printf("angka ke - %d : ",a + 1);scanf("%d",&number);
//         angka[a] = number;
//     }

//     printf("\n\nGenap\t: ");
//     for(int a = 0;a < length;a++)
//     {
//         if(angka[a] % 2 == 0)
//         {
//             printf("%d ",angka[a]);
//             buffer++;
//             total += angka[a];
//         }
//     }
//     printf("\nBanyak angka            : %d",buffer);
//     printf("\nTotal keseluruhan angka : %d",total);
//     printf("\n\nGanjil\t: ");
//     for(int a = 0;a < length;a++)
//     {
//         if(angka[a] % 2 == 1)
//         {
//             printf("%d ",angka[a]);
//             buffer1++;
//             total1 += angka[a];
//         }
//     }
//     printf("\nBanyak angka            : %d",buffer1);
//     printf("\nTotal keseluruhan angka : %d",total1);
// }

// void soal2()
// {
//     int length,number,total = 0,total1 = 0,buffer,buffer1 = 0;
//     printf("Input panjang array : ");scanf("%d",&length);
//     int angka[length];

//     for(int a = 0;a < length;a++)
//     {
//         printf("angka ke - %d : ",a + 1);scanf("%d",&number);
//         angka[a] = number;
//     }

//     printf("\n\nGenap\t: ");
//     for(int a = 0;a < length;a++)
//     {
//         for(int b = 0; b < length;b++)
//         {
//             if(angka[a] < angka[b])
//             {
//                 buffer = angka[a];
//                 angka[a] = angka[b];
//                 angka[b] = buffer;
//             }
//         }

//     }

//     for (int a = 0; a < length; a++)
//     {
//         if(angka[a] %2 == 0)
//         {
//             printf("%d ",angka[a]);
//         }
//     }

// }

// void main()
// {
//     soal1();
//     soal2();
//     getch();
// }

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char us[10], ps[10];
    int login = 0;
    char user[10] = "yanti";
    char pass[10] = "12345";
    do
    {
        printf("Username : ");
        gets(us);
        printf("Password : ");
        gets(ps);
        if (strcmp(us, user) == 0 && strcmp(ps, pass) == 0)
        {
            printf("Welcome to my program");
        }
        else
        {
            printf("Login gagal");
        }
        login++;
    } while (login < 3);
    getch();
}

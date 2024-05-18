#include <stdio.h>
#include <conio.h>
#include <string.h>

void soal1()
{
    int length,ascanding,descanding;
    float nilai;

    printf("Input panjang array : ");scanf("%d",&length);
    float number[length];
    char name[100];
    char ascanding1[100],descanding1[100];
    char nama[length][100];

    getchar();
    printf("\n\n");
    for(int a = 0; a < length; a++)
    {
        printf("Input nama ke - %d\t\t: ",a + 1);gets(name);
        strcpy(nama[a],name);
        printf("Input nilai %s\t: ",name);scanf("%f",&nilai);
        number[a] = nilai;
        getchar();
    }
    
    printf("\n\nUrut nilai dari terkecil ke terbesar\n\n");
    for(int a = 0; a < length;a++)
    {
        for(int b = 0; b < length;b++)
        {
            if(number[a] < number[b])
            {
                ascanding = number[a];
                number[a] = number[b];
                number[b] = ascanding;

                strcpy(ascanding1,nama[a]);
                strcpy(nama[a],nama[b]);
                strcpy(nama[b],ascanding1);
            }
        }
    }
    
    for (int a = 0; a < length;a++)
    {
        printf("%s\t\t\t: ",nama[a]);
        printf("%.2f\n",number[a]);
    }

    printf("\n\nUrut nilai dari terbesar ke terkecil\n\n");
    for(int a = 0; a < length;a++)
    {
        for(int b = 0; b < length;b++)
        {
            if(number[a] > number[b])
            {
                descanding = number[a];
                number[a] = number[b];
                number[b] = descanding;

                strcpy(descanding1,nama[a]);
                strcpy(nama[a],nama[b]);
                strcpy(nama[b],descanding1);
            }
        }
    }
    
    for (int a = 0; a < length;a++)
    {
        printf("%s\t\t\t: ",nama[a]);
        printf("%.2f\n",number[a]);
    }
}

void main()
{
    soal1();
    //soal2();
    getch();
}
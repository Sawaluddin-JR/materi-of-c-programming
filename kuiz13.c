#include <stdio.h>
#include <conio.h>
#include <string.h>

// char nama[50];
// char prodi[50];
// int umur;

void input()
{
    char nama[50],prodi[50];
    int umur;

    FILE* buffer;
    printf("Nama    : ");gets(nama);
    buffer = fopen("data.txt","a");
    printf("Umur    : ");scanf("%d",&umur);
    getchar();
    buffer = fopen("data.txt","a");
    printf("Prodi   : ");gets(prodi);
    buffer = fopen("data.txt","a");
    //strcat(nama,"\n");
    //strcat(prodi,"\n");

    // FILE* buffer;
    //buffer = fopen("data.txt","a");
    fprintf(buffer,"Nama %s\n",nama);
    //fputs(nama,buffer);
    fprintf(buffer,"Umur : %d\n",umur);
    fprintf(buffer,"Prodi: %s\n",prodi);
    //fputs(prodi,buffer);
    fclose(buffer);
}

void main()
{
    input();
    getch();
}
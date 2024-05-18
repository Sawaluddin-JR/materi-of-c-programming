#include <stdio.h>
#include <conio.h>

FILE *file;

void main()
{
    char nama[40],alamat[30];
    int umur;

    int a;
    char b;
    char kal[40];

    printf("Input  : ");printf("\n");
    scanf("%d %c %s",&a,&b,&kal);
    printf("\nOutput : %d %c %s",a,b,kal);

    // printf("Nama     : ");gets(nama);
    // printf("Alamat   : ");gets(alamat);
    // printf("Umur     : ");scanf("%d",&umur);

    // file = fopen("kuis14.txt","a");
    // fprintf(file,"%s-%s-%d",nama,alamat,umur);

    // fclose(file);

    getch();
}
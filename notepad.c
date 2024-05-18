#include <stdio.h>
#include <conio.h>
//#include <stdbool.h>
//#include <windows.h>

void main()
{
    char name[50],alamat[50];
    printf("Input nama    : ");
    gets(name);
    printf("Input alamat : ");
    gets(alamat);
    FILE * file;
    file = fopen("artikel.txt","a");
    fprintf(file,"%s-%s\n",name,alamat);
    fclose(file);

    if((file == fopen("artikel.txt","r") == 00))
    {
        printf("Kosong");
    }
    else
    {
        fgets(name,sizeof(name),file);
        printf("%s",name);
        fclose(file);
    }
    getch();
}
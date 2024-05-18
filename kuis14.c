#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "tampilan.c"

void login();
void loading();
void input();

char username[20],pass[10],name[30],ttl[60],alamat[50],agama[15];
int pil;
int a = 0;

FILE *file;

void login()
{
    a++;
    gotoxy(50,17);printf("Username : ");
    gotoxy(50,19);printf("Password : ");
    gotoxy(61,17);gets(username);
    gotoxy(61,19);scanf("%s",&pass);
    if(strcmp("Venus",username) == 0 && strcmp("venus123",pass) == 0)
    {
        system("cls");
        loading();
    }
    else
    {
        if( a < 4)
        {
            gotoxy(51,22);printf("Input failed!!");
            Sleep(3000);
            system("cls");
            getchar();
            login();
        }
        else
        {
            gotoxy(51,22);printf("Failed attempt!!");
            Sleep(3000);
            exit(0);
        }
    }
}

void loading()
{
    gotoxy(56,18);printf("Loading!!");
    for(int a = 1; a <= 60;a++)
    {
        setcolor(9,0);
        gotoxy(30+a,20);printf("%c",219);Sleep(10);
    }
    system("cls");
    getchar();
    input();
}

void input()
{
    gotoxy(50,5);printf("B I O D A T A");
    gotoxy(20,10);printf("Nama                  : ");
    gotoxy(20,12);printf("Tempat,Tanggal lahir  : ");
    gotoxy(20,14);printf("Alamat                : ");
    gotoxy(20,16);printf("Agama                 : ");
    gotoxy(45,10);gets(name);
    gotoxy(45,12);gets(ttl);
    gotoxy(45,14);gets(alamat);
    gotoxy(45,16);gets(agama);

    gotoxy(20,25);printf("1.Add");
    gotoxy(50,25);printf("2.Show");
    gotoxy(80,25);printf("3.Exit");
    //gotoxy(80,25);printf("4.Exit");

    do
    {
        gotoxy(20,27);printf("Pilih : ");
        gotoxy(27,27);scanf("%d",&pil);
        gotoxy(27,27);printf(" ");

        if(pil == 1)
        {
            file = fopen("kuis14.txt","a");
            fprintf(file,"%s-%s-%s-%s\n",name,ttl,alamat,agama);
            // fprintf(file,"%s-",ttl);
            // fprintf(file,"%s-",alamat);
            //fprintf(file,"%s\n\n",agama);
            fclose(file);
        }
        // else if(pil == 2)
        // {
        //     file = fopen("kuis14.txt","w");
        //     fprintf(file,"%s-",name);
        //     fprintf(file,"%s-",ttl);
        //     fprintf(file,"%s-",alamat);
        //     fprintf(file,"%s\n",agama);
        // }
        else if(pil == 2)
        {
            if((file == fopen("kuis14.txt","r") == 00)){
                printf("Kosong");
            }
            else
            {
                while(fgets(name,255,file))
                {
                    gotoxy(20,30);printf("%s",name);
                }
                fclose(file);
            }
        }
        else if(pil == 3)
        {
            exit(0);
        }
    }
    while(pil < 3);

    
}

void main()
{
    login();
    //input();
    getch();
}
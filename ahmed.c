#include <stdio.h>
#include <conio.h>

void main()
{
    // tampil();
    // printf("\n");
    // tam();
    // lempar(8);
    char nama[20];//variable
    //int tam=0;
    printf("Nama : ");gets(nama);//inputan
    FILE* zazz;//a,r,w  buka note
    zazz=fopen("data.txt","a");//a buat nambah //input death note
    fprintf(zazz,"nama : %s",nama);//input note 
    // fprintf,fputs,dll,cari sendiri sintaknya
    fclose(zazz); //menutup note
    
    // char namatam[20];
    // FILE* bass;//a,r,w
    // bass=fopen("data.txt","r");
    // int nomor=0;
    // while(fscanf(bass,"%s",&namatam)==NULL){
    //     nomor++;
    // }
    // printf("Nama : %s",namatam);
    // fclose(bass);
    getch();
}
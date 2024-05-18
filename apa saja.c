#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

char nama[100],prodi [100];
int batas, umur, mtk[100], inggris[100],indo[100],bio[100],kimia[100],pkn[100];
void main(){
    
    // printf("masukkan jumlah nama : ");scanf("%d",&batas);
    // for(int a=0;a<batas){
    printf("nama : ");gets(nama);
    // printf("umur : ");scanf("%d",&umur);getchar();
    // printf("prodi : ");gets(prodi);
    // printf("matematika :");scanf("%d",&mtk[a]);
    // printf("inggris : ");scanf("%d",&inggris[a]);
    // printf("indonesia : ");scanf("%d",&indo[a]);
    // printf("biologi : ");scanf("%d",&bio[a]);
    // printf("kimia : ");scanf("%d",&kimia[a]);
    // printf("pkn : ");scanf("%d",&pkn[a]);
    FILE * buffer;
    // buffer = fopen("data.txt","a");
    
    // fprintf(buffer,"%s",nama);
    // fprintf(buffer,"\n%d",umur);
    // fprintf(buffer,"\n%s",prodi);
    // fprintf(buffer)
    //  fclose(buffer);
    // }
    buffer = fopen("data.txt","r");
    int nomor=0;
    while(fgets(buffer,sizeof(nama),nama))
    {

    }
}
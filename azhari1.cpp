#include <stdio.h>
#include <conio.h>
#define phi 3.14

int main(){
    float r,luas;
   
    printf("NAMA     : Azhari fahreza\n");
    printf("fakultas : Ilmu komputer\n");
    printf("PRODI    : D3 MANAJEMEN INFORMATIKA\n");
    printf("Masukkan r : ");scanf("%f",&r);
 
   luas = phi*r*r;
   
   printf("luas lingkaran     : %f",luas);

getch();
}
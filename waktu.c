#include<stdio.h>
#include<conio.h>
main (){

    int detik,menit,jam;
    printf("masukan waktu");
    scanf("%d",&detik);
    jam=detik/3600;
    menit=detik%3600/60;
    detik=detik%60;

    printf("%idetik %imenit %ijam", detik, menit,jam);

    getch();
}
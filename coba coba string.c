#include <string.h>
#include <stdio.h>
#include <conio.h>
void main(){
    char kendaraan[20];
    int lama,totalbayar;

printf("masukan jenis kendaraan nama :");fflush(stdin);
scanf("%s",&kendaraan);


printf("lama parkir:");
scanf("%d",&lama);
if (strcmp(kendaraan,"mobil")==0){
    totalbayar=lama*10000;
}
else if(strcmp(kendaraan,"pesawat")==0)
{
    totalbayar=lama*1000000;

}
else{ 
    totalbayar=lama*5000;

}
printf("total bayar = %d",totalbayar);
    

getch();
}

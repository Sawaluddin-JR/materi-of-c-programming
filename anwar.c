#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void makanan();
void minuman();
void buah();
void bahanmasak();
void perlengkapanmandi();
void perlengkapannyuci();
void obat();
int indek = 0,tamp[100],pembayaran[100];
char bayar[100][100];

void menu(){
    system("cls");
    char sedia[][100] = {"Makanan","Minuman","Buah","Bahan Masak","Perlengkapan Mandi","Perlengkapan Nyuci","Obat"};
    int pilih;
    printf("\tMenu\n");
    for(int i = 0; i < sizeof sedia/sizeof sedia[0];i++){
        printf("%d.%s\n",i+1,sedia[i]);
    }
    printf("Pilih\t: ");scanf("%d",&pilih);
    if(pilih == 1){
        makanan();
    }
    else if(pilih == 2){
        minuman();
    }
    else if(pilih == 3){
        buah();
    }
    else if(pilih == 4){
        bahanmasak();
    }
    else if(pilih == 5){
        perlengkapanmandi();
    }
    else if(pilih == 6){
        perlengkapannyuci();
    }
    else if(pilih == 7){
        obat();
    }
    else{
        printf("Inputan Tidak Ada\n");
        menu();
    }
}
void embayaran(int totall){
    int uang,byr = 0;
    byr = totall;
    printf("%d",byr);
    while(byr > 0){
        printf("Input Uang\t: ");scanf("%d",&uang);
        byr -= uang;
    }
    if(bayar > 0){
        printf("Kembalian Anda Rp.%d",-1*byr);
    }
    else{
        printf("Uang Anda Pass");
    }
}
void total(char* kirim,int krim){
    int jlh,totall = 0;
    char pilihan;
    printf("Jumlah\t\t: ");scanf("%d",&jlh);
    pembayaran[indek] = krim;
    tamp[indek] = jlh;
    strcpy(bayar[indek],kirim);
    totall+=krim*jlh;
    printf("Apakah anda ingin Belanja Lagi? \t: ");pilihan = getche();
    if(pilihan == 'y'){
        indek++;
        menu();
    }
    else if(pilihan == 't'){
        for(int i = 0; i <= indek; i++){
            printf("\n");
            printf("%d.\t%d %s\t=\tRp%d\n",i+1,tamp[i],bayar[i],pembayaran[i]*tamp[i]);
        }
        embayaran(totall);
    }
}
void makanan(){
    system("cls");
    char makanan[][100] = {"Kurma","Potato","Roma Biskuit","Nabati","Biskuat","Ciki-ciki","Tango wafer","coklat","pilus","emping udang","Keripik Buah Salak"};
    int harga[100] = {10000,5000,3000,12000,2000,6000,17000,20000,9000,13000,8000};
    int plh,hrg;
    char tamp[100]; 
    for(int i = 0; i < sizeof makanan/sizeof makanan[0]; i++){
        if(i == 8 || i == 0){
            printf("%d.%s\t\t\t\tRp.%d\n",i+1,makanan[i],harga[i]);
        }
        else if(i == 10){
            printf("%d.%s\t\tRp.%d\n",i+1,makanan[i],harga[i]);
        }
        else{
            printf("%d.%s\t\t\tRp.%d\n",i+1,makanan[i],harga[i]);
        }
    }
    printf("Silahkan Di pilih\t: ");scanf("%d",&plh);
    strcpy(tamp,makanan[plh-1]);
    hrg = harga[plh-1];
    total(tamp,hrg);
}
void minuman(){
    system("cls");
    char minuman[][100] = {"Lemon tea","Ichi ocha","susu steril","indomilk","Hydro coco","Lasegar","Tropical Slim","coconut","Coca cola","Pocari sweat","c100"};
    int harga[] = {11000,4000,5000,6000,9000,10000,7000,18000,12000,10000,16000};
    int plh,hrg;
    char tamp[100];
    for(int i = 0;i < sizeof minuman/sizeof minuman[0]; i++){
        if(i == 10){
            printf("%d.%s\t\t\tRp.%d\n",i+1,minuman[i],harga[i]);
        }
        else{
            printf("%d.%s\t\tRp.%d\n",i+1,minuman[i],harga[i]);
        }
    }
    printf("Silahkan Di pilih\t: ");scanf("%d",&plh);
    strcpy(tamp,minuman[plh-1]);
    hrg = harga[plh-1];
    total(tamp,hrg);
}
void buah(){
    system("cls");
    char buah[][100] = {"apel","anggur","jeruk","salak","langsat","Duku","semangka","sawu","Manggis","Pepaya","Pir"};
    int harga[100] = {15000,30000,7000,18000,10000,12000,8000,9000,23000,4000,32000};
    int plh,hrg;
    char tamp[100];
    for(int i = 0; i < sizeof buah/sizeof buah[0]; i++){
        if(i == 1 || i == 4 || i == 6 || i == 8 || i == 9){
            printf("%d.%s\tRp.%d\n",i+1,buah[i],harga[i]);
        }
        else{
            printf("%d.%s\t\tRp.%d\n",i+1,buah[i],harga[i]);
        }
    }
    printf("Silahkan Di pilih\t: ");scanf("%d",&plh);
    strcpy(tamp,buah[plh-1]);
    hrg = harga[plh-1];
    total(tamp,hrg);
}
void bahanmasak(){
    system("cls");
    char masak[][100] = {"Minyak goreng","tomat","Merica","Garam","Kecap","Saus","Cabe","Bawang merah","Bawang Putih","Mentega","Bawang prei"};
    int harga[100] = {14000,5000,2000,3000,8000,6000,19000,12000,10000,16000,9000};
    int plh,hrg;
    char tamp[100];
    for(int i = 0; i < sizeof masak/sizeof masak[0]; i++){
        if(i == 1 || i >= 3 && i <= 6){
            printf("%d.%s\t\t\tRp.%d\n",i+1,masak[i],harga[i]);
        }
        else{
            printf("%d.%s\t\tRp.%d\n",i+1,masak[i],harga[i]);
        }
    }
    printf("Silahkan Di pilih\t: ");scanf("%d",&plh);
    strcpy(tamp,masak[plh-1]);
    hrg = harga[plh-1];
    total(tamp,hrg);
}
void perlengkapanmandi(){
    system("cls");
    char mandi[][100] = {"Sabun Detol","Shampo rejoice","Pasta Gigi","Pepsodent","Shampo hadandshouder","Sabun lifeboy","Sikat Badan","Sbun Getsbi","Mens Biore","Tissue","Shampo dove"};
    int harga[] = {4000,1000,6000,7000,1500,30000,9000,12000,20000,4000,500},hrg;
    int plh;
    char tamp[100];
    for(int i = 0; i < sizeof mandi/sizeof mandi[0]; i++){
        if(i == 1 || i == 4){
            printf("%d.%s\tRp.%d\n",i+1,mandi[i],harga[i]);
        }
        else{
            printf("%d.%s\t\tRp.%d\n",i+1,mandi[i],harga[i]);
        }
    }
    printf("Silahkan Di pilih\t: ");scanf("%d",&plh);
    strcpy(tamp,mandi[plh-1]);
    hrg = harga[plh-1];
    total(tamp,hrg);
}
void perlengkapannyuci(){
    system("cls");
    char pakaian[][100] = {"Ekonomi","Brush","Ember","daia","Rinso","Molto","Soklin","Hanger","Tempat sabun","Gentle gen","Deterjen"};
    int harga[] = {3000,2000,15000,2500,1000,500,10000,8000,6000,11000,14000};
    int plh,hrg;
    char tamp[100];
    for(int i = 0; i < sizeof pakaian/sizeof pakaian[0]; i++){
        if(i >= 1 && i <= 5){
            printf("%d.%s\t\t\tRp.%d\n",i+1,pakaian[i],harga[i]);
        }
        else {
            printf("%d.%s\t\tRp.%d\n",i+1,pakaian[i],harga[i]);
        }
    }
    printf("Silahkan Di pilih\t: ");scanf("%d",&plh);
    strcpy(tamp,pakaian[plh-1]);
    hrg = harga[plh-1];
    total(tamp,hrg);
}
void obat(){
    system("cls");
    char barang[][100] = {"Paracetamol","Boderex","Boderexin","Procol","Promagh","hidrostop","Betadine","Perban","Kapas","Handiplas","Ampicilin"};
    int harga[] = {10000,15000,7000,9000,5000,20000,25000,17000,14000,13000,11000};
    int plh,hrg;
    char tamp[100];
    for(int i = 0; i < sizeof barang/sizeof barang[0]; i++){
        if(i == 8){
            printf("%d.%s\t\t\tRp.%d\n",i+1,barang[i],harga[i]);
        }
        else{
            printf("%d.%s\t\tRp.%d\n",i+1,barang[i],harga[i]);
        }
    }
    printf("Silahkan Di pilih\t: ");scanf("%d",&plh);
    strcpy(tamp,barang[plh-1]);
    hrg = harga[plh-1];
    total(tamp,hrg);
}
void login()
{
    char username[100],pass[100];
    printf("Username\t: ");gets(username);
    printf("Password\t: ");gets(pass);
    if(strcmp(username,"Anwar123") == 0 && strcmp(pass,"anwarjuni") == 0){
        menu();
    }
    else{
        login();
    }
}
void main(){
    login();
}
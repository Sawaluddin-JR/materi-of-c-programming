#include<iostream>
#include<iomanip>
using namespace std;
float buffer=0,luas;
void hitung(){
    buffer+=luas;
}
int main(){
    float jari;
    const float phi = 3.142857;
    float alas,tinggi;
    int sisi;
    char pilih,ulang;
    do{
        cout<<"========================="<<endl;
        cout<<"\n Menghitung luas bangun datar \n"
            <<"1. Persegi \n"
            <<"2. Segitiga \n"
            <<"3. Lingkaran \n"
            <<"Pilih (1..3) : ";cin>>pilih;
        cout<<"==========================="<<endl;
        switch(pilih){
        case '1' :
            cout<<"Menghitung luas persegi"<<endl;
            cout<<"Sisi = ";cin>>sisi;
            cout<<"Luas persegi = "<<sisi*sisi;
            luas=sisi*sisi;
            hitung();
            break;
        case '2' :
            cout<<"Menghitung luas segitiga"<<endl;
            cout<<"Alas = ";cin>>alas;
            cout<<"Tinggi = ";cin>>tinggi;
            cout<<"Luas segitiga = "<<0.5 * alas * tinggi;
            luas=0.5 * alas * tinggi;
            hitung();
            break;
        case '3' :
            cout<<"Menghitung luas lingkaran"<<endl;
            cout<<"Jari-jari = "; cin>>jari;
            cout<<setprecision(8);
            cout<<"Luas lingkaran = "<<phi * jari * jari;
            luas=phi * jari * jari;
            hitung();
            break;
        default :
            cout<<"Pilihan anda tidak ada di sistem"<<endl;
        }
        cout<<"\nKembali ke menu utama ? (y/n) "; cin>>ulang;  
    }while(ulang == 'y' || ulang == 'Y'); 
    printf("jumlah pengunjung paling banyak : %.0f",buffer*0.4);
}
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define handle GetStdHandle(STD_OUTPUT_HANDLE)

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////                                                                        ////
////								FIRST PROJECT "SAWAL SPORT"                      ////
////                    					 BY                                  ////
////                    		S A W A L U D D I N                           ////
////                    				S1 TEKNIK INFORMATIKA                   ////
////                                                                        ////
////   							                                                 ////
////   							                                                 ////
////                                                                        ////
////                                                                        ////
//// 									  SCREEN BUFFER SIZE                          ////
////   										WIDTH  :120                             ////
////  										 HEIGHT :41                             ////
////                                                                        ////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//========================================================================
//                               PROTOTYPE                               =
//========================================================================
void isidata();
void bingkai_awal();
void bingkai_judul();
void bingkai_menu();
void tentang();
void bingkai_admin();
void layar();
void layar2();
void hps_menu();
void clear();
void judul();
void bingkai_bismillah();
void bismillah();
void kode();
void keluar();
void tabel();
void menu_utama();
void info();
void kembali();
void data();
void nama_pembeli();
void alamat1();
void nope1();
void faktur();
void bayar();
int valtah(char a[]);
int valnope(char a[]);
int valhur(char a[]);
int valal(char a[]);

//========================================================================
//                                   ARRAY WARNA                         =
//========================================================================
enum color{
   HITAM,
   BIRU_GELAP,
   HIJAU_GELAP,
   PINK_GELAP,
   MERAH_GELAP,
   UNGU_GELAP,
   KUNING_GELAP,
   PUTIH_GELAP,
   ABU_ABU,
   BIRU,
   HIJAU,
   CYAN,
   MERAH,
   UNGU,
   KUNING,
   PUTIH};

//==========================================================================
//                            VARIABEL GLOBAL                              =
//==========================================================================
char pilih;
char user[25];
char pil_utama;
char pil_kode[5];
int idx;
char unit1[10];
char unit2[10];
char unit3[10];
char unit4[10];
char unit5[10];
char unit6[10];
int jumlah1;
int jumlah2;
int jumlah3;
int jumlah4;
int jumlah5;
int jumlah6;
int total_u;
int total_j;
struct tabel{
	char kode[10];
   char barang[20];
   int harga;
   int stock;
}sport[50];
char nama[100];
char alamat[100];
char nope[20];
char tanggal[10];
char tahun[10];
char bulan[10];
char uang[100];
char kembalian[100];
char hrg[100];
char stck[100];


//============================================================================
//                                 WARNA & POSISI                            =
//============================================================================

void udin(int x, int y)
{
    COORD posisi = {x, y};
    SetConsoleCursorPosition(handle, posisi);
}
void setcolor(int text, int background)
{
    SetConsoleTextAttribute(handle, background * 16 + text);
}

//===========================================================================
//                               PENDATAAN                                  =
//===========================================================================

void isidata(){
	strcpy(sport[0].kode,"1");
   strcpy(sport[0].barang,"Bola Mikasa");
   sport[0].harga=100000;
   sport[0].stock=30;
   strcpy(sport[1].kode,"2");
   strcpy(sport[1].barang,"Kaos Kaki ");
   sport[1].harga=25000;
   sport[1].stock=50;
	strcpy(sport[2].kode,"3");
   strcpy(sport[2].barang,"Deker");
   sport[2].harga=30000;
   sport[2].stock=40;
   strcpy(sport[3].kode,"4");
   strcpy(sport[3].barang,"Sarung Tangan Kiper");
   sport[3].harga=60000;
   sport[3].stock=20;
   strcpy(sport[4].kode,"5");
   strcpy(sport[4].barang,"Jersey");
   sport[4].harga=15000;
   sport[4].stock=50;
   strcpy(sport[5].kode,"6");
   strcpy(sport[5].barang,"Sepatu");
   sport[5].harga=120000;
   sport[5].stock=35;

}

//===================================================================
//                           BINGKAI                                =
//===================================================================

void bingkai_awal(){
   setcolor(9,0);
	for(int a=1;a<=116;a++){
      udin(a+1,1);printf("%c",219);Sleep(8);
      udin(a+1,39);printf("%c",219);Sleep(8);
   }
   for(int b=1;b<=38;b++){
      udin(2,b+1);printf("%c",219);Sleep(10);
      udin(3,b+1);printf("%c",219);Sleep(10);
      udin(116,b+1);printf("%c",219);Sleep(10);
      udin(117,b+1);printf("%c",219);Sleep(10);
   }
   judul();
}
void bingkai_judul(){
	for(int x=1;x<=116;x++){
   	udin(x+1,8);printf("%c",219);Sleep(10);
   }
}
void bingkai_menu(){
	setcolor(1,0);
	for(int x=3;x<=114;x++){
   	udin(x+1,8);printf("%c",219);Sleep(10);
      udin(x+1,12);printf("%c",219);Sleep(10);

   }

   for(int y=9;y<=11;y++){
      	udin(25,y);printf("%c",219);Sleep(10);
         udin(48,y);printf("%c",219);Sleep(10);
         udin(71,y);printf("%c",219);Sleep(10);
         udin(94,y);printf("%c",219);Sleep(10);
   }
}

//=======================================================================
//                          TAMPILAN PERTAMA                            =
//=======================================================================
void tentang(){
   setcolor(15,0);
   udin(15,5);printf("N A M A     :   S A W A L U D D I N");
   udin(15,7);printf("N I M       :   0 2 0 3 2 1 1 1 0 4 1");
   udin(15,9);printf("P R O D I   :   S 1  T E K N I K   I N F O R M A T I K A");
   setcolor(2,0);
   udin(5,37);printf(" Copyright By Sawaluddin Siregar");
   setcolor(15,0);
   udin(74,35);printf("TEKAN TOMBOL 'X' UNTUK KEMBALI !!!");
   udin(15,15);printf("Tempat/Tanggal lahir : Panti,28 Desember 2001");
   udin(15,17);printf("Hobby                : Sepakbola/Futsal");
   udin(15,19);printf("Alamat               : Padangsidimpuan - Provinsi SUMUT");
   udin(15,21);printf("Agama                : Islam");
   udin(15,23);printf("Golongan Darah       : B");
   udin(15,25);printf("Pendidikan           : Mahasiswa");
   udin(15,27);printf("Asal Sekolah         : SMK NEGERI 3 PADANGSIDIMPUAN");
   udin(74,37);printf("DI TEKAN YA :");pilih=getch();
   while(pilih){
   	if(pilih=='X'){
         layar2();
   		bingkai_admin();
   	}
   	else{
   		pilih=getch();
   	}
   }

}
void bingkai_admin(){
   char pilih;
   setcolor(4,0);
	for(int a=1;a<=116;a++){
      udin(a+1,1);printf("%c",219);Sleep(8);
      udin(a+1,39);printf("%c",219);Sleep(8);
   }
   for(int b=1;b<=38;b++){
      udin(2,b+1);printf("%c",219);Sleep(10);
      udin(3,b+1);printf("%c",219);Sleep(10);
      udin(116,b+1);printf("%c",219);Sleep(10);
      udin(117,b+1);printf("%c",219);Sleep(10);
   }
   setcolor(15,0);
   udin(35,5);printf("B I S M I L L A H I R R O H M A N I R R O H I M");Sleep(100);
   udin(15,7);printf("<=== A S S A L A M U A L A I K U M   W A R A H M A T U L L A H I   W A B A R A K A T U H ===>");Sleep(1000);
   setcolor(4,0);
   for (int a=2;a<114;a++){
      udin(2+a,10);printf("%c",220);
   }setcolor(9,0);
   for (int a=1;a<=3;a++){
   	for (int b=1;b<=23;b++){
      	udin(50+b,13+a);printf("%c",219);
         udin(50+b,19+a);printf("%c",219);
         udin(50+b,25+a);printf("%c",219);
      }
   }
   setcolor(15,0);
   udin(55,15);printf(" 1. A D M I N ");
   udin(55,21);printf(" 2. A B O U T ");
   udin(55,27);printf(" 3. E X I T   ");
   setcolor(15,0);
   udin(46,34);printf(" <=== Tekan Pilihan Anda (1 s/d 3) ===> ");
   udin(93,37);printf("pilih :");pilih=getch();
   while (pilih>0){
   	if (pilih=='1'){
         layar2();
         bingkai_awal();
         //kode();
   	}
   	else if (pilih=='2'){
         layar2();
         for (int a=2;a<114;a++){
         	udin(2+a,10);printf("%c",220);
         }
        tentang();
   	}else if (pilih=='3'){
         layar2();
         setcolor(15,0);
         udin(50,20);printf("T E R I M A K A S I H");
         udin(15,22);printf("<=== A S S A L A M U A L A I K U M   W A R A H M A T U L L A H I   W A B A R A K A T U H ===>");
			Sleep(3000);exit(0);
   	}
      else {
         setcolor(8,0);
         udin(57,36);printf("Inputan Salah");Sleep(1000);
         udin(57,36);printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219);
         udin(100,37);pilih=getch();
      }
   }      
}
//========================================================================
//                            PERINTAH HAPUS                             =
//========================================================================
void layar(){
	setcolor(15,0);
	for(int y=2;y<=38;y++){
   	for(int x=4;x<116;x++){
      	udin(x,y);printf("%c",219);
      }
   }setcolor(4,15);
   udin(98,36);printf("Copyright");
   udin(100,37);printf("Sawaluddin 2022");
}
void layar2(){
  setcolor(0,0);
	for(int y=2;y<=38;y++){
   	for(int x=4;x<116;x++){
      	udin(x,y);printf("%c",219);
      }
   } 
}
void hps_menu(){
	setcolor(15,0);
	for(int y=13;y<=38;y++){
   	for(int x=4;x<116;x++){
      	udin(x,y);printf("%c",219);
      }
   }
}
void clear(char a[],int x,int y){
	for(int z=0;z<strlen(a);z++){
   	udin(x+z,y);printf(" ");
   }
}
//=========================================================================
//                           PERJUDULAN                                   =
//=========================================================================
void judul(){
   udin(35,3);printf("B I S M I L L A H I R R O H M A N I R R O H I M");Sleep(100);
   udin(38,5);printf("A S S A L A M U A L A I K U M  W R.  W B.");Sleep(1000);
   for(int i=1;i<=15;i++){
   setcolor(i,0);
   udin(10,10);printf(" *******     ****      ***              ***      ****      ****            ");Sleep(5);
   udin(10,11);printf(" *******    ******     ***              ***     ******     ****            ");Sleep(5);
   udin(10,12);printf(" ***       ***  ***    ***              ***    ***  ***    ****            ");Sleep(5);
   udin(10,13);printf(" ***       ***  ***    ***      **      ***    ***  ***    ****            ");Sleep(5);
   udin(10,14);printf(" ***       ***  ***    ***     ****     ***    ***  ***    ****            ");Sleep(5);
   udin(10,15);printf(" *******   ***  ***    ***    ******    ***    ***  ***    ****            ");Sleep(5);
   udin(10,16);printf(" *******   ********    ***   ***  ***   ***    ********    ****            ");Sleep(5);
   udin(10,17);printf("     ***   ********    ***  ***    ***  ***    ********    ****            ");Sleep(5);
   udin(10,18);printf("     ***   ***  ***    *** ***      *** ***    ***  ***    ****            ");Sleep(5);
   udin(10,19);printf("     ***   ***  ***    ******        ******    ***  ***    ****            ");Sleep(5);
   udin(10,20);printf(" *******   ***  ***    *****          *****    ***  ***    *************** ");Sleep(5);
   udin(10,21);printf(" *******   ***  ***    ****            ****    ***  ***    *************** ");Sleep(5);

   udin(15,25);printf(" ******    ***********     ****     ***********   ***********    ");Sleep(5);
   udin(15,26);printf(" ******    ***********    ******    ***********   ***********    ");Sleep(5);
   udin(15,27);printf(" ***       ****    ***   ***  ***   ***    ***        ***        ");Sleep(5);
   udin(15,28);printf(" ***       ****   ***    ***  ***   ***   **          ***        ");Sleep(5);
   udin(15,29);printf(" ******    *********     ***  ***   ********          ***        ");Sleep(5);
   udin(15,30);printf("    ***    ****          ***  ***   ********          ***        ");Sleep(5);
   udin(15,31);printf(" ******    ****           ******    ***   ***         ***        ");Sleep(5);
   udin(15,32);printf(" ******    ****            ****     ***     **        ***        ");Sleep(5);
   udin(43,37);printf("P R O G R E M M E R  S E J A T I");Sleep(10);
}  
   layar();
   kode();
}

//===========================================================================
//                            BISMILLAH                                     =
//===========================================================================
void bingkai_bismillah(){
   setcolor(9,0);
   for (int a=3;a<=12;a++){
      for (int b=14;b<=106;b++){
         if(a==3 || a==12 || b==14 || b==106){
            udin(b,a);printf("%c",219);Sleep(2);
         }else{
            printf(" ");
         }
      }printf("\n");
   }

}
void bismillah(){
   bingkai_bismillah();
   for(int i=1;i<=15;i++){
   setcolor(i,0);
   udin(15,5);printf("  **********   ***  ********  ***    ****  ***  **         **           ****    ***   *** ");Sleep(5);
   udin(15,6);printf("  ***    **    ***  ***       ****   ****  ***  **         **          ******   ***   *** ");Sleep(5);
   udin(15,7);printf("  ***     **   ***  ********  **  ***  **  ***  **         **         ***  ***  ***   *** ");Sleep(5);
   udin(15,8);printf("  **********   ***       ***  **  ***  **  ***  **         **         ********  ********* ");Sleep(5);
   udin(15,9);printf("  ***     ***  ***       ***  **       **  ***  *********  ********** ***  ***  ***   *** ");Sleep(5);
   udin(15,10);printf("  **********   ***  ********  **       **  ***  *********  *********  ***  ***  ***   *** ");Sleep(5);
   }
}
//===========================================================================
//                            MASUK & KELUAR                                =
//===========================================================================
void kode(){
   char user[25];
   bismillah();
   setcolor(0,0);
   for(int a=1;a<=5;a++){
   	for(int b=1;b<=35;b++){
      	udin(b+43,a+16);printf("%c",219);
      }
   }
   setcolor(11,0);
   for(int a=1;a<=5;a++){
   	for(int b=1;b<=35;b++){
         if(a==1||b==1||a==5||b==35){
      	udin(b+43,a+16);printf("%c",219);Sleep(10);
         }
      }
   }
   setcolor(15,0);
   udin(46,19);printf("Masukkan Kode:");
	udin(61,19);printf("Max 9 digit");Sleep(1000);
   udin(61,19);printf("           ");
   int a=0;
   udin(61,19);user[a]=getch();
   while(user[a]!=13){
      if(user[a]==8){
      setcolor(15,0);a--;
      	if(a<0){
      		a=0;
      	}udin(61+a,19);printf(" ");
      }else{
         printf("*");
      	a++;
      }if(a>9){
      	a=9;udin(70,19);printf(" ");
      }udin(61+a,19);user[a]=getch();

   }user[a]=00;
   if((strlen(user)<=9) && (strcmp(user,"sawal1234")==0)){
   	for(int a=1,b=1;a<=100;a++)
      {
         setcolor(0,15);
			udin(54,33);printf("Loading %d%%",a);Sleep(20);
      	if(a%2==0)
         {
      		setcolor(9,0);
   			udin(b+35,35);printf("%c",219);Sleep(30);b++;
      	}
   	}
         Sleep(10);
    		layar();
         menu_utama();

   }else{
      setcolor(4,0);
      	udin(61,19);printf("kode salah!!!");Sleep(1000);
         udin(61,19);printf("             ");
         kode();
   }
}
void keluar() {
   char pilih;
   setcolor(0,15);
   udin(45,20); printf("ANDA YAKIN INGIN KELUAR? (Y/N) : "); pilih=getche();

   if (pilih=='Y'){
      setcolor(6,0);
      for(int a=18;a<=26;a++){
         for(int b=22;b<=96;b++){
            if(a==18 || a==26 || b==22 || b==96){
               udin(b,a);printf("%c",219);
            }else{
               printf(" ");
            }
         }printf("\n");
      }
      for(int i=1;i<=15;i++){
      setcolor(i,0);
      udin(24,20);printf("@@@@@@@  @@@@@  @@@@  @  @     @   @@@   @   @   @@@    @@@@   @  @   @");Sleep(5);
      udin(24,21);printf("  @     @      @   @  @  @@   @@  @   @  @  @   @   @  @       @  @   @");Sleep(5);
      udin(24,22);printf("  @     @@@@   @@@@   @  @ @ @ @  @@@@@  @@@    @@@@@   @@@@   @  @@@@@");Sleep(5);
      udin(24,23);printf("  @     @      @  @   @  @  @  @  @   @  @  @   @   @       @  @  @   @");Sleep(5);
   	udin(24,24);printf("  @     @@@@@  @   @  @  @     @  @   @  @   @  @   @  @@@@@   @  @   @");Sleep(5);
      }
      setcolor(9,0);
            for(int a=29;a<33;a++){
            	for(int b=44;b<=75;b++){
                  if(a==29||a==32||b==44||b==75){
               	udin(b,a);printf("%c",219);Sleep(5);
                  }
               }
            }
      setcolor(0,15);
      udin(46,30);printf("COPYRIGHT BY SAWALUDDIN SRG");
      udin(50,31);printf("S1 TEKNIK INFORMATIKA");Sleep(5000);
      exit(0);
   }

   else if (pilih=='N'){
   	layar();
      menu_utama();

	}

   else {
   	setcolor(12,15);
      udin(53,28);printf("INPUTAN SALAH!!!");Sleep(500);
      setcolor(3,0);
      hps_menu();
      keluar();
   }
}
//======================================================================
//                                  TABEL                              =
//======================================================================
void tabel(){
	hps_menu();
   //isidata();
   setcolor(0,0);
   for(int a=15;a<=23;a++){
   	for(int b=9;b<=75;b++){
      	udin(b,a);printf("%c",219);
      }
   }
   setcolor(6,0);
    idx=5;
	for(int y=1;y<=idx+4;y++){
   	udin(9,y+15);printf("%c",219);Sleep(1);
      udin(23,y+15);printf("%c",219);Sleep(1);
      udin(45,y+15);printf("%c",219);Sleep(1);
      udin(61,y+15);printf("%c",219);Sleep(1);
      udin(69,y+15);printf("%c",219);Sleep(1);
   }for(int x=1;x<=67;x++){
   	udin(x+8,15);printf("%c",219);Sleep(1);
      udin(x+8,17);printf("%c",219);Sleep(1);
      udin(x+8,idx+19);printf("%c",219);Sleep(1);
   }
    	setcolor(15,0);
   	udin(11,16);printf("KODE BARANG");
   	udin(33,16);printf("BARANG");
   	udin(51,16);printf("HARGA");
   	udin(63,16);printf("STOCK");

      setcolor(15,0);
   for(int x=0;x<idx+1;x++){
    	udin(13,18+x);printf("%s",sport[x].kode);
      udin(25,18+x);printf("%s",sport[x].barang);
      udin(48,18+x);printf("Rp %d",sport[x].harga);
      udin(65,18+x);printf("%d",sport[x].stock);
   }

}

//=============================================================================
//                                  MENU AWAL                                 =
//=============================================================================  
void menu_utama(){
   layar();
  	bingkai_menu();
   setcolor(0,15);
   udin(111,10);printf("  ");
   udin(50,5);printf("S A W A L  S P O R T");
   udin(9,10);printf("1. PENJUALAN");
   udin(29,10);printf("2. UPDATE DATA");
   udin(50,10);printf("3.INFO SAWAL SPORT");
   udin(78,10);printf("4. KELUAR");
   udin(100,10);printf("PILIHAN :");
   udin(111,10);pil_utama=getche();
   if(pil_utama=='1'){
      setcolor(12,15);
      udin(9,10);printf("1. PENJUALAN");
      data();
      setcolor(0,0);
            for(int a=15;a<26;a++){
            	for(int b=70;b<=103;b++){
               	udin(b,a);printf("%c",219);
               }
            }
            for(int a=9;a<=103;a++){
            	udin(a,25);printf("%c",219);
            }
            setcolor(6,0);
         	for(int y=1;y<=idx+6;y++){
   				udin(83,y+15);printf("%c",219);Sleep(1);
      			udin(103,y+15);printf("%c",219);Sleep(1);
            }
            for(int x=1;x<=34;x++){
   				udin(x+69,15);printf("%c",219);Sleep(1);
      			udin(x+69,17);printf("%c",219);Sleep(1);
      			udin(x+69,idx+19);printf("%c",219);Sleep(1);
    			}
            for(int x=9;x<=103;x++){
            	udin(x,idx+21);printf("%c",219);Sleep(1);
            }
            udin(9,idx+20);printf("%c",219);Sleep(1);
            udin(69,idx+20);printf("%c",219);Sleep(1);
            udin(83,idx+20);printf("%c",219);Sleep(1);
            udin(103,idx+20);printf("%c",219);Sleep(1);

            setcolor(15,0);
            //textbackground(0);
            udin(73,16);printf("UNIT");
            udin(87,16);printf("JUMLAH");
            udin(29,idx+20);printf("TOTAL");

            setcolor(0,0);
            for(int a=30;a<35;a++){
            	for(int b=18;b<=102;b++){
               	udin(b,a);printf("%c",219);
               }
            }

            setcolor(12,0);
            for(int a=30;a<35;a++){
            	for(int b=18;b<=102;b++){
                  if(a==30||a==34||b==18||b==102){
               	udin(b,a);printf("%c",219);
                  }
               }
            }
            setcolor(15,0);
            //textbackground(0);
            udin(20,32);printf("Masukkan kode barang yang ingin dijual(tombol 'S' untuk selesai):");
            int a=1;
            bool status;
         	status=true;
         	while(status){
            setcolor(15,0);
            //textbackground(0);
            clear(pil_kode,86,32);
            udin(86,32);gets(pil_kode);

          		if(strcmp(pil_kode,"1")==0){
                  if(a>1){
                  sport[0].stock+=atoi(unit1);
                  total_u-=atoi(unit1);
                  total_j-=jumlah1;
                  clear(unit1,71,18);
                  udin(65,18);printf("        ");
                  udin(65,18);printf("%d",sport[0].stock);
                  udin(85,18);printf("          ");
                  udin(71,idx+20);printf("          ");
                  udin(85,idx+20);printf("          ");
                  }
                  a++;
                  bool status;
                  status=true;
                  while(status){
                  	setcolor(15,0);
            			//textbackground(0);
                  	udin(71,18);gets(unit1);
                     if(valtah(unit1)==0&&strlen(unit1)<9&&strlen(unit1)!=0){
                        if(atoi(unit1)<0||atoi(unit1)>sport[0].stock){
                        	clear(unit1,71,18);
                           udin(71,18);printf(" ");
                        }else{
                          	sport[0].stock-=atoi(unit1);
                           jumlah1=atoi(unit1)*sport[0].harga;
                           total_u=atoi(unit1)+atoi(unit2)+atoi(unit3)+atoi(unit4)+atoi(unit5)+atoi(unit6);
                           total_j=jumlah1+jumlah2+jumlah3+jumlah4+jumlah5+jumlah6;
                           udin(65,18);printf("        ");
                           udin(65,18);printf("%d",sport[0].stock);
                           udin(85,18);printf("Rp %d",jumlah1);
                           udin(71,idx+20);printf("%d",total_u);
                           udin(85,idx+20);printf("Rp %d",total_j);
                        	status=false;
                        }
                     }else{
                     	setcolor(12,15);
            				//textbackground(15);
                  		clear(unit1,71,18);
                			udin(52,36);printf("Inputan tidak valid!!");Sleep(1000);
                        udin(52,36);printf("                     ");
               	   }
                  }
               }else if(strcmp(pil_kode,"2")==0){

                  if(a>1){
                  	sport[1].stock+=atoi(unit2);
                     clear(unit2,71,19);
                     udin(65,19);printf("        ");
                     udin(65,19);printf("%d",sport[1].stock);
                     udin(85,19);printf("          ");
                     udin(71,idx+20);printf("          ");
                  	udin(85,idx+20);printf("          ");

                  }
                  a++;
                  bool status;
                  status=true;
                  while(status){
                  	setcolor(15,0);
            			//textbackground(0);
                  	udin(71,19);gets(unit2);
                     if(valtah(unit2)==0&&strlen(unit2)<9&&strlen(unit2)!=0){
                     	if(atoi(unit2)<0||atoi(unit2)>sport[1].stock){
                        	clear(unit2,71,19);
                           udin(71,19);printf(" ");
                        }else{
                          	sport[1].stock-=atoi(unit2);
                           jumlah2=atoi(unit2)*sport[1].harga;
                           total_u=atoi(unit1)+atoi(unit2)+atoi(unit3)+atoi(unit4)+atoi(unit5)+atoi(unit6);
                           total_j=jumlah1+jumlah2+jumlah3+jumlah4+jumlah5+jumlah6;
                           udin(65,19);printf("        ");
                           udin(65,19);printf("%d",sport[1].stock);
                           udin(85,19);printf("Rp %d",jumlah2);
                           udin(71,idx+20);printf("%d",total_u);
                           udin(85,idx+20);printf("Rp %d",total_j);
                           status=false;
                        }
                     }else{
                     	setcolor(12,15);
            				//textbackground(15);
                  		clear(unit2,71,19);
                			udin(52,36);printf("Inputan tidak valid!!");Sleep(1000);
                        udin(52,36);printf("                     ");
                		}
                  }
               }else if(strcmp(pil_kode,"3")==0){

                  if(a>1){
                  	sport[2].stock+=atoi(unit3);
                     clear(unit3,71,20);
                     udin(65,20);printf("        ");
                     udin(65,20);printf("%d",sport[2].stock);
                     udin(85,20);printf("          ");
                     udin(71,idx+20);printf("          ");
                  	udin(85,idx+20);printf("          ");
                  }
                  a++;
                  bool status;
                  status=true;
                  while(status){
                  	setcolor(15,0);
            			//textbackground(0);
                  	udin(71,20);gets(unit3);
                     if(valtah(unit3)==0&&strlen(unit3)<9&&strlen(unit3)!=0){
                     	if(atoi(unit3)<0||atoi(unit3)>sport[2].stock){
                        	clear(unit3,71,20);
                           udin(71,20);printf(" ");
                        }else{
                          	sport[2].stock-=atoi(unit3);
                           jumlah3=atoi(unit3)*sport[2].harga;
                           total_u=atoi(unit1)+atoi(unit2)+atoi(unit3)+atoi(unit4)+atoi(unit5)+atoi(unit6);
                           total_j=jumlah1+jumlah2+jumlah3+jumlah4+jumlah5+jumlah6;
                           udin(65,20);printf("        ");
                           udin(65,20);printf("%d",sport[2].stock);
                           udin(85,20);printf("Rp %d",jumlah3);
                           udin(71,idx+20);printf("%d",total_u);
                           udin(85,idx+20);printf("Rp %d",total_j);
                           status=false;
                        }
                     }else{
                     	setcolor(12,0);
            				//textbackground(15);
                  		clear(unit3,71,20);
                			udin(52,36);printf("Inputan tidak valid!!");Sleep(1000);
                        udin(52,36);printf("                     ");
               	   }
                  }
               }else if(strcmp(pil_kode,"4")==0){
                  if(a>1){
                  	sport[3].stock+=atoi(unit4);
                     clear(unit4,71,21);
                     udin(65,21);printf("        ");
                     udin(65,21);printf("%d",sport[3].stock);
                     udin(85,21);printf("          ");
                     udin(71,idx+20);printf("          ");
                  	udin(85,idx+20);printf("          ");

                  }
                  a++;
                  bool status;
                  status=true;
                  while(status){
                  	setcolor(15,0);
            			//textbackground(0);
                  	udin(71,21);gets(unit4);
                     if(valtah(unit4)==0&&strlen(unit4)<9&&strlen(unit4)!=0){
                     	if(atoi(unit4)<0||atoi(unit4)>sport[3].stock){
                        	clear(unit4,71,21);
                           udin(71,21);printf(" ");
                        }else{
                          	sport[3].stock-=atoi(unit4);
                           jumlah4=atoi(unit4)*sport[3].harga;
                           total_u=atoi(unit1)+atoi(unit2)+atoi(unit3)+atoi(unit4)+atoi(unit5)+atoi(unit6);
                           total_j=jumlah1+jumlah2+jumlah3+jumlah4+jumlah5+jumlah6;
                           udin(65,21);printf("        ");
                           udin(65,21);printf("%d",sport[3].stock);
                           udin(85,21);printf("Rp %d",jumlah4);
                           udin(71,idx+20);printf("%d",total_u);
                           udin(85,idx+20);printf("Rp %d",total_j);
                           status=false;
                        }
                     }else{
                     	setcolor(12,15);
            				//textbackground(15);
                  		clear(unit4,71,21);
                			udin(52,36);printf("Inputan tidak valid!!");Sleep(1000);
                        udin(52,36);printf("                     ");
               	   }
                  }
               }else if(strcmp(pil_kode,"5")==0){

                  if(a>1){
                  	sport[4].stock+=atoi(unit5);
                     clear(unit5,71,22);
                     udin(65,22);printf("        ");
                     udin(65,22);printf("%d",sport[4].stock);
                     udin(85,22);printf("          ");
                     udin(71,idx+20);printf("          ");
                  	udin(85,idx+20);printf("          ");

                  }
                  a++;
                  bool status;
                  status=true;
                  while(status){
                  	setcolor(15,0);
            			//textbackground(0);
                  	udin(71,22);gets(unit5);
                     if(valtah(unit5)==0&&strlen(unit5)<9&&strlen(unit5)!=0){
                       	if(atoi(unit5)<0||atoi(unit5)>sport[4].stock){
                        	clear(unit5,71,22);
                           udin(71,22);printf(" ");
                        }else{
                          	sport[4].stock-=atoi(unit5);
                           jumlah5=atoi(unit5)*sport[4].harga;
                           total_u=atoi(unit1)+atoi(unit2)+atoi(unit3)+atoi(unit4)+atoi(unit5)+atoi(unit6);
                           total_j=jumlah1+jumlah2+jumlah3+jumlah4+jumlah5+jumlah6;
                           udin(65,22);printf("        ");
                           udin(65,22);printf("%d",sport[4].stock);
                           udin(85,22);printf("Rp %d",jumlah5);
                           udin(71,idx+20);printf("%d",total_u);
                           udin(85,idx+20);printf("Rp %d",total_j);
                        	status=false;
                        }
                     }else{
                     	setcolor(12,15);
            				//textbackground(15);
                  		clear(unit5,71,22);
                			udin(52,36);printf("Inputan tidak valid!!");Sleep(1000);
                        udin(52,36);printf("                     ");
               	   }
                  }
               }else if(strcmp(pil_kode,"6")==0){

                  if(a>1){
                  	sport[5].stock+=atoi(unit6);
                     clear(unit6,71,23);
                     udin(65,23);printf("        ");
                     udin(65,23);printf("%d",sport[5].stock);
                     udin(85,23);printf("          ");
                     udin(71,idx+20);printf("          ");
                  	udin(85,idx+20);printf("          ");

                  }
                  a++;
                  bool status;
                  status=true;
                  while(status){
                  	setcolor(15,0);
            			//textbackground(0);
                  	udin(71,23);gets(unit6);
                     if(valtah(unit6)==0&&strlen(unit6)<9&&strlen(unit6)!=0){
                     	if(atoi(unit6)<0||atoi(unit6)>sport[5].stock){
                        	clear(unit6,71,23);
                           udin(71,23);printf(" ");
                        }else{
                          	sport[5].stock-=atoi(unit6);
                           jumlah6=atoi(unit6)*sport[5].harga;
                           total_u=atoi(unit1)+atoi(unit2)+atoi(unit3)+atoi(unit4)+atoi(unit5)+atoi(unit6);
                           total_j=jumlah1+jumlah2+jumlah3+jumlah4+jumlah5+jumlah6;
                           udin(65,23);printf("        ");
                           udin(65,23);printf("%d",sport[5].stock);
                           udin(85,23);printf("Rp %d",jumlah6);
                           udin(71,idx+20);printf("%d",total_u);
                           udin(85,idx+20);printf("Rp %d",total_j);
                        status=false;
                        }
                     }else{
                     	setcolor(12,15);
            				//textbackground(15);
                  		clear(unit6,71,23);
                			udin(52,36);printf("Inputan tidak valid!!");Sleep(1000);
                        udin(52,36);printf("                     ");
               	   }
                  }
               }else if(strcmp(pil_kode,"S")==0){
                  hps_menu();
                  status=false;
                  faktur();

               }else{
                	setcolor(12,15);
            		//textbackground(15);
                  clear(pil_kode,86,32);
                	udin(52,36);printf("Inputan salah!!!");Sleep(1000);
                  udin(52,36);printf("                ");
               }
      }
   }else if(pil_utama=='2'){
      setcolor(12,15);
      udin(29,10);printf("2. UPDATE DATA");
      setcolor(12,15);
      udin(50,24);printf("program belum jadi!!");
      kembali();   
   }else if(pil_utama=='3'){
      setcolor(12,15);
      udin(50,10);printf("3.INFO SAWAL SPORT");Sleep(1000);
      info();
   }else if(pil_utama=='4'){
      setcolor(12,15);
      udin(78,10);printf("4. KELUAR");
      keluar();
   }   
   
}

//=============================================================================
//                                  INFO PRODUK                               =
//=============================================================================  
void info()
{
   setcolor(0,15);
   udin(7,17);printf("|========================================================================================================|");
   udin(7,18);printf("|                                       S A W A L  S P O R T                                             |");
   udin(7,19);printf("==========================================================================================================");
   udin(7,20);printf("|                                                                                                        |");Sleep(1000);
   udin(7,21);printf("|   SAWAL SPORT toko yang menjual perlengkapan/peralatan di bidang olahraga                              |");Sleep(1000);
   udin(7,22);printf("|   berstandar SNI mulai dari kostum,sepatu,dan alat lainnya.SAWAL SPORT terjun ke dunia bisnis untuk    |");Sleep(1000);
   udin(7,23);printf("|   menjual alat-alat olahraga yang nyaman untuk di pake dan berbahan original dengan harga terjangkau.  |");Sleep(1000);
   udin(7,24);printf("|   SAWAL SPORT beralamat di Jl. Dakoto no.8A kelurahan Sukaraja kecamatan Cicendo kota Bandung.         |");Sleep(1000);
   udin(7,25);printf("|   Ayo!! segera beli peralatan olahraga yang dibutuhkan anda!!                                          |");Sleep(1000);
   udin(7,26);printf("==========================================================================================================");Sleep(10);
   kembali();
   //info();
}
//=========================================================================
//                            KEMBALI                                     =
//=========================================================================

void kembali(){
setcolor(1,15);
udin(37,36);printf("TEKAN TOMBOL '0' UNTUK PILIH MENU LAIN :");Sleep(500);
udin(77,36);printf("  ");
udin(77,36);pil_utama=getche();
   if(pil_utama=='0'){
      hps_menu();
      menu_utama();
   }else{
      setcolor(4,15);
      udin(53,37);printf("INPUTAN SALAH!!!");Sleep(1000);
      udin(53,37);printf("                   ");Sleep(1);
      kembali();
	}
}

//==========================================================================
//                               ISI DATA                                  =
//==========================================================================
void data(){
	setcolor(0,0);
   for(int a=18;a<=28;a++){
   	for(int b=28;b<=112;b++){
         udin(b,a);printf("%c",219);
      }
   }
   setcolor(6,0);
   for(int a=18;a<=28;a++){
   	for(int b=7;b<=112;b++){
      	if(a==18||b==7||a==28||b==112||b==28){Sleep(10);
         	udin(b,a);printf("%c",219);
         }
      }
   }
	setcolor(0,15);
   udin(9,21);printf("Nama pembeli    :");
   udin(9,23);printf("Alamat          :");
   udin(9,25);printf("No.Hp           :");
   nama_pembeli();
}
void nama_pembeli(){
	setcolor(15,0);
	udin(30,21);gets(nama);
   if(valhur(nama)==0&&strlen(nama)<=35&&strlen(nama)!=0){
      alamat1();
   }else if(strlen(nama)>35){
      clear(nama,30,21);
		udin(30,21);printf("Maksimal 35 digit");Sleep(1000);
      udin(30,21);printf("                      ");
      nama_pembeli();
   }else{
   	clear(nama,30,21);
   	udin(30,21);printf("Inputan tidak valid");Sleep(1000);
      udin(30,21);printf("                       ");
      nama_pembeli();
   }
}
void alamat1(){
   setcolor(15,0);
	udin(30,23);gets(alamat);
   if(!(valal(alamat)==0&&strlen(alamat)<=35&&strlen(alamat)!=0)){
      clear(alamat,30,23);
   	udin(30,23);printf("Inputan tidak valid");Sleep(1000);
      udin(30,23);printf("                       ");
      alamat1();
   }else if(strlen(alamat)>25){
      clear(alamat,30,23);
		udin(30,23);printf("Maksimal 35 digit");Sleep(1000);
      udin(30,23);printf("                      ");
      alamat1();
   }else{
      nope1();
   }
}
void nope1(){
   setcolor(15,0);
   udin(30,25);gets(nope);
   if(valnope(nope)==0&&strlen(nope)>=11&&strlen(nope)<=13&&strlen(nope)!=0){
      tabel();
   }else if(!(strlen(nope)<=13&&strlen(nope)>=11)){
      clear(nope,30,25);
		udin(30,25);printf("Input 11-13 digit!!");Sleep(1000);
      udin(30,25);printf("                      ");
      nope1();
   }else{
   	clear(nope,30,25);
   	udin(30,25);printf("Inputan tidak valid");Sleep(1000);
      udin(30,25);printf("                       ");
      nope1();
   }


}
////============================FAKTUR======================================////

void faktur(){
	setcolor(0,0);
   for(int a=16;a<=33;a++){
   	for(int b=33;b<=83;b++){
         	udin(b,a);printf("%c",219);
      }
   }

   setcolor(5,0);
   for(int a=16;a<=33;a++){
   	for(int b=33;b<=83;b++){
      	if(a==16||a==33||b==33||b==83){
         	udin(b,a);printf("%c",219);
         }
      }
   }

	setcolor(15,0);
   //textbackground(0);
   udin(54,18);printf("SAWAL SPORT");
	//udin(55,19);printf("%s/%s/%s",tanggal,bulan,tahun);
   udin(40,21);printf("Nama pembeli       : %s",nama);
   udin(40,23);printf("Alamat             : %s",alamat);
   udin(40,25);printf("No.Hp              : %s",nope);
   udin(40,27);printf("Total belanja      : Rp %d",total_j);
   bayar();

}

void bayar(){
	setcolor(15,0);
   //textbackground(0);
	udin(40,29);printf("Jumlah uang        : Rp ");gets(uang);
	if(valtah(uang)==0&&strlen(uang)!=0){
     	if(atoi(uang)<total_j){
      	udin(40,31);printf("Uang anda kurang Rp %d",total_j-atoi(uang));Sleep(1500);
         udin(40,31);printf("                                      ");
         clear(uang,64,27);
         faktur();
      }else{
   		udin(40,31);printf("Kembalian          : Rp %d",atoi(uang)-total_j);
           	strcpy(unit1,"0");
				strcpy(unit2,"0");
				strcpy(unit3,"0");
				strcpy(unit4,"0");
				strcpy(unit5,"0");
				strcpy(unit6,"0");
				jumlah1=0;
				jumlah2=0;
				jumlah3=0;
				jumlah4=0;
				jumlah5=0;
				jumlah6=0;
				total_u=0;
            total_j=0;
         kembali();
      }
   }else{
      clear(uang,64,29);
      setcolor(12,15);
      //textbackground(15);
   	udin(50,36);printf("Inputan tidak valid");Sleep(1000);
      udin(50,36);printf("                    ");
      bayar();
   }


}

//====================================================================
//                          VALIDASI ANGKA                           =
//====================================================================

int valtah(char a[]){
   int x=0;int y=0;
   if(a[0]==' '){
      y=1;
      return y;
   }

	for(int i=0;i<strlen(a);i++){
 		if(!(a[i]>='0'&&a[i]<='9')){
    		x++;
 		}
	}
   return x;
}
//=======================================================================
//                            VALIDASI NO.HP                            =
//=======================================================================
int valnope(char a[]){
   int x=0;int y=0;
   if(a[0]==' '){
      y=1;
      return y;
   }else if(a[0]!='0'||a[1]!='8'||a[2]=='0'||a[2]=='4'||a[2]=='6'){
   	y=1;
      return y;
	}for(int i=0;i<strlen(a);i++){
 		if(!(a[i]>='0'&&a[i]<='9')){
    		x++;
 		}
	}
   return x;
}

//========================================================================
//                            VALIDASI NAMA                              =
//========================================================================
int valhur(char a[]){
	int x=0; int y=0; int z=0;
   	if(a[0]==' '||a[strlen(a)-1]==' '||a[0]=='-'||a[strlen(a)-1]=='-'){
      	x=1;
      	return x;
    	}
	for(int x=0;x<strlen(a);x++){
   	if(a[x]==' '||a[x-1]==' '){
      	z++;
         if(z>2){
          y++;
         }
 		}else if(!(a[x]>='a'&&a[x]<='z'||a[x]>='A'&&a[x]<='Z'||(a[x]==' '&&a[x+1]!=' ')||a[x]=='-'||a[x]=='\''||a[x]==' '&&a[x+1]!='-')){
    		y++;
  		}
	}
   return y;
}

//==============================================================================
//                         VALIDASI ALAMAT                                     =
//==============================================================================
int valal(char a[]){
   int x=0;int y=0;
   if(a[0]==' '||a[strlen(a)-1]==' '||a[0]=='.'||a[0]==','||a[0]=='-'){
   	x=1;
      return x;
   }
	for(int i=0;i<strlen(a);i++){
 		if(!(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'||a[i]=='.'&&a[i+1]!='.'||a[i]>='0'&&a[i]<='9'||a[i]=='-'&&a[i+1]!='-'||a[i]==','&&a[i+1]!=','||a[i]==' '&&a[i+1]!=' '||(a[i]=='-'&&(!(a[i+1]>='0'&&a[i+1]<='9'))))){
    		y++;
 		}
	}
   return y;
}

void main(){
   isidata();
   //bingkai_awal();
   bingkai_admin();
   getch();
}
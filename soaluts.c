#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>

void soal1()
{
  int x = 6, y = 2;

  printf("%d ", x++);
  printf("%d ", x--);
  printf("%d ", --y + x--);
  printf("%d ", x + 2);
  printf("%d ", 5 + y++);
  // 6 7 7 7 6

}

void soal2()
{
  int x,y,z;

  x = 0;
  y = 6;
  z = x * y;
  x = 3 * (y + z);
  y -= x;

  printf("%d %d %d",--x,z++,y);
  //17 0 -12

}

void soal3()
{
  int a, b, c, d;

  a = 2;
  b += a;
  a = b;
  c -= b;
  d = 4;

  int e = a % d * a;
  //printf("%d ",e);

  a++;
  b = a++;
  //printf("%d ",b);
  c = b * e;

  printf("%d %d ",a++,++b);
  printf("%d ",--e + 1);
  printf("%d ",c++);
  // 4 4 4 12

}

void soal4()
{
  int y = 7,z = 8,x = (y * z) % 2;

  printf("%s ",x > 0 ? "Hamdalah":x < 0? "Bismillah" : x >= 0 ? "Basmalah" : "Alhamdulillah");
  //Basmalah

}

void soal5()
{
  int a,b;

  a = 5,b = a,b * 2;

  if(b > 4 && b == 6)
  {
    a++;
  }
  else if(!(b > 7))
  {
    b++;
  }
  else
  {
    --b;
  }

  printf("%d dan %d",b += 3,a += 10);
  // 9 dan 15

}

void soal6()
{
  int angka,besar = 0,lokasi;

  for(int a = 1; a <= 5;a++)
  {
    printf("Angka ke %d : ",a);scanf("%d",&angka);
    if( angka > besar)
    {
      lokasi = a;
      besar = angka;
    }
  }
  printf("\nAngka terbesar adalah : %d\n",besar);
  printf("Posisi : %d",lokasi);

}

void soal7()
{
  int e = 5,E = 5;

  if(e == E && E > 5)
  printf("Kelompok 2 ");

  else
  printf("Venus ");
  printf("Ayo pasti bisa");

}

void soal8()
{
  int m,n,o;

  m = n = 5,o = 2 + m - 3;

  bool test = ((m + o * n) > 20 ? true : false);

  switch(test)
  {
    case true:
      printf("Barcelona ");
    case false:
      printf("Madrid ");
    default:
      printf("Juventus ");
    break;
  }
  printf("Juara,Jumlah Pemain : %d",m - 3 + n * (n - 2));
  //Barcelona Madrid Juventus Juara,Jumlah pemain : 17

}

void soal9()
{
  printf("\oh\\pacarku\mantan\naku\cantikan\\biarkanku\\tinggi\"haluh");
  //oh\pacarkumantan
  //akucantikan\biarkanku\meninggi”haluh

}

void soal10()
{
  int angka = 7;
  for( int i = angka; i > 0; i-- )
  {
  	if( i % 2 == 0 ){
      angka--;
    }
    printf("%d ", angka);
  }
}

void soal11()
{
  int a;
  for(a = 0; a < 8;a++)
  {
    a += 2;
    if(a%2 == 0)
    {
      printf(" %d", a);
    }
  }
}

void soal12()
{
  int k = 10,l = k%12;
  do{
    printf("halo ");
    if(k == l)
    {
      printf("tampan ");
    }k += 5;
  }while(k < 20);
  //halo tampan halo
}

void soal13()
{
  int a = 0;
  while( a < 15){
    printf(" %d", a);
    a += 4;
  }
  // 0 4 8 12
}
void soal14()
{
  int a = 0;
  while( a < 10){
    printf(" %d", a);
  }
}

void soal15()
{
  int a = 1;
  do
  {
    printf("UTS2022 ");
    if(a > 6)
    {
      break;
    }
    a++;
  }while (a <= 10);
}

void soal16()
{
  int b = 13, y = 2, c = 17,x = 7;
  b -= 6;
  printf("%d ",b--);
  y += 10;
  printf("%d ",--y);
  b += 5;
  if (b == 10)
  {
    printf("%d ",b);
  }
  if(b < 12)
  {
    for(int j = 1; j <= 1; j++)
    {
      continue;
    }
  }
  if(b > 10)
  {
    printf("%d ",--b);
    printf("%d ",y -= 3);
    printf("%d ",c++);
    printf("%d ",--x);
    goto pindah;
  }
  printf("Belajar ");
  printf("%d ",x++);
  printf("%d ",++c);
  pindah :
  printf("%d ",c -= 16);
  printf("%d ",x += 3);
  printf("%d ",x++);
  printf("%d ",c += 2);
  printf("%d ",b -= 5);
}

void soal19()
{
  //segitiga siku - siku
  for ( int a = 0; a < 8; a++)
  {
    for ( int b = 0; b < 8; b++)
    {
      if ( b < a )
      {
        printf("* ");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}

void soal20()
{
  for ( int a = 0; a < 7; a++)
  {
    for ( int b = 0; b < 7; b++)
    {
      if ( a < b + 1)
      {
        printf("* ");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}

void soalessay2()
{
  char nama[50],alamat[40],angkatan[20];
  int umur,libur,total;
  char jenis_kelamin;
  char murojaah;
  float ipk;

  printf("Nama\t: ");gets(nama);
  printf("Umur\t:");scanf("%d",&umur);
  printf("Jenis kelamin : ");jenis_kelamin = getche();
  getchar();
  printf("\nNama angkatan : ");gets(angkatan);
  printf("Provinsi\t: ");gets(alamat);
  printf("apakah anda lulus murojah (y/t) ? ");murojaah = getche();
  printf("\nIPK\t: ");scanf("%f",&ipk);

 if(strcmp("Jawa Barat",alamat)==0)
 {
  libur += 4;
  if( murojaah == 'y')
  {
    libur += 2;
    if(ipk == 4.00)
    {
      libur += 5;
    }
    else
    {
      libur += 0;
    }
  }
  else
  {
    libur += 0;
    if(ipk == 4.00)
    {
      libur += 5;
    }
    else
    {
      libur += 0;
    }
  }
 }
 else if(strcmp("Jawa Timur",alamat)==0)
 {
  libur += 6;
  if( murojaah == 'y')
  {
    libur += 2;
    if(ipk == 4.00)
    {
      libur += 5;
    }
    else
    {
      libur += 0;
    }
  }
  else
  {
    libur += 0;
    if(ipk == 4.00)
    {
      libur += 5;
    }
    else
    {
      libur += 0;
    }
  }
 }
  else if(strcmp("Sumatera",alamat)==0)
 {
  libur += 8;
  if( murojaah == 'y')
  {
    libur += 2;
    if(ipk == 4.00)
    {
      libur += 5;
    }
    else
    {
      libur += 0;
    }
  }
  else
  {
    libur += 0;
    if(ipk == 4.00)
    {
      libur += 5;
    }
    else
    {
      libur += 0;
    }
  }
 }

 printf("\nNama : %s",nama);
 printf("\nUmur : %d",umur);
 printf("\nJenis kelamin : %c",jenis_kelamin);
 printf("\nnama angkatan : %s",angkatan);
 printf("\nJumlah libur : %d",libur);

}

void soalessay3()
{
  int ongkos,total,jml;
  char kategori;

  printf("1.Dewasa\tRp10.000\n2.Anak SMA\tRp5.000\n3.Anak SD\tRp2.000\n\n");
  printf("Pilih kategori : ");kategori = getche();

  switch(kategori)
  {
    case '1':
      printf("\n\nInput jumlah orang : ");scanf("%d",&jml);
      total = jml * 10000;
      printf("Dewasa\n");
      printf("Total ongkos : %d",total);
      break;
    case '2':
      printf("\n\nInput jumlah orang : ");scanf("%d",&jml);
      total = jml * 5000;
      printf("Anak SMA\n");
      printf("Total ongkos : %d",total); 
      break;
    case '3':
      printf("\n\nInput jumlah orang : ");scanf("%d",&jml);
      total = jml * 2000;
      printf("Anak SD\n");
      printf("Total ongkos : %d",total);
      break;  
    default:
      printf("\n\nInput jumlah orang : ");scanf("%d",&jml);
      total = jml * (2000/2);
      printf("Bayi\n");
      printf("Total ongkos : %d",total);
    break;  
  }
}

void soal4essay()
{
  int batas;
  printf("Input batas : ");scanf("%d",&batas);

  for(int a = 0; a < batas * 2;a++)
  {
    for(int b = 0;b < batas * 2;b++)
    {
      if(a == batas *2/2-1 || b == batas *2/2-1)
      {
        printf("* ");
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }
}

void main()
{
  //soal1();            
  //soal2();            
  //soal3();            
  //soal4();            
  //soal5();            
  //soal6();            
  //soal7();  
  //soal8();       
  //soal9();            
  //soal10();           
  //soal11();
  //soal12();
  //soal13();
  //soal14();
  //soal15();
  //soal16();
  //soal17();
  //soal18();
  //soal19();
  //soal20();
  //soalessay2();
  //soalessay3();
  soal4essay();

  getch();
}  

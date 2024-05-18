#include <stdio.h>
#include <conio.h>

void soal1()
{
    int bil1,bil2,bil3,terbesar,terkecil;
    printf("Input bilangan ke - 1 : ");scanf("%d",&bil1);//4
    printf("Input bilangan ke - 2 : ");scanf("%d",&bil2);//3
    printf("Input bilangan ke - 3 : ");scanf("%d",&bil3);//2

    if(bil1 > bil2 && bil1 > bil3)
    {
        terbesar = bil1;
    }
    else 
    {
        terkecil = bil1;
    }
    if(bil2 > bil1 && bil2 > bil3)
    {
        terbesar = bil2;
    }
    else
    {
        terkecil = bil2;
    }
    if(bil3 > bil1 && bil3 > bil2)
    {
        terbesar = bil3;
    }
    else
    {
        terkecil = bil3;
    }
    printf("Bilangan terbesar : %d\n",terbesar);
    printf("Bilangan terkecil : %d",terkecil);
}

void soal2()
{
    int batas;
    printf("Input batas : ");scanf("%d",&batas);
    printf("Deret pertama\t: ");
    for (int a = 2; a < batas;a++)// a = 2; a < batas; a+=2;
    {
        //printf("%d ",a);
        if(a %2 ==0)
        {
            printf("%d ",a);
        }
    }
    printf("\nDeret kedua\t: ");
    for ( int a = 1; a <= batas;a++)
    {
        printf("%d ",a * a);
    
    }
    printf("\nDeret ketiga\t: ");
    int temp1 = 2,temp2 = 2;
    for ( int a = 0; a < batas * 2;a++)//a = 0; a < batas * 2;a+=2
    {
        if(a%2 == 0)
        {
            printf("%d ",temp1);
            temp1 += 1; 
        }
        else
        {
            printf("%d ",temp2);
            temp2 += 2; 
        }
    }

    printf("\nDeret keempat\t: ");
    int fibo1 = 1,fibo2 = 0;
    for(int a = 1;a < batas; a++)
    {
        if(a %2 == 0)
        {
            if(fibo1 <= batas)
            {
                printf("%d ",fibo1);
                fibo1 += fibo2;
            }
        }
        else
        {
            if(fibo2 <= batas)
            {
                printf("%d ",fibo2);
                fibo2 += fibo1;
            }
        }
    }

}

void soal3()
{
    float data,data1 = 0,data2,jumlah_data,rata_rata;
    int bts;
    printf("Input batas : ");scanf("%d",&bts);

    for (int a = 0;a < bts; a++)
    {
        printf("Data ke - %d : ",a + 1);scanf("%f",&data);

        jumlah_data += data;
        if(data1 < data)
        {
            data1 = data;
            data1 = data2;
            data2 = data;
        }
       
    }
    rata_rata = jumlah_data / bts;
    printf("\n\nData terbesar\t: %.2f",data1);
    printf("\nData terkecil\t: %.2f",data2);
    printf("\nJumlah data\t: %.2f",jumlah_data);
    printf("\nRata-rata\t: %.2f",rata_rata);

}

void soal4()
{
    int ordo,i;
    printf("Masukkan Ordo : ");scanf("%d",&ordo);

    printf("%3c",'X');
    for(i = 1; i <= ordo; i++)
    {
        printf("%3d",i);
    }
    printf("\n");

    for(int a = 1;a <= ordo;a++)
    {
        printf("%3d",a);
        for(int b = 1; b <= ordo;b++)
        {
            printf("%3d",b * a);
        }
        printf("\n");
    }
}

void soal5()
{
    int a,b,c = 0;
    printf("Input angka : ");scanf("%d",&a);

    while ( a != 0)
    {
        b= a % 10;
        a = a / 10;
        c = c + b;
    }
    printf("Hasil penjumlahan bilangan diatas adalah : %d",c);
}

void main ()
{
    //soal1();
    soal2();
    //soal3();
    //soal4();
    //soal5();
    getch();
}
#include <iostream>//(1)
#include <iomanip>
#include <stdio.h>
using namespace std;

struct databrg//(2)
{
    char namabrg[15];//(3)
    int hrgsatuan;//(4)
    int jmlhbeli;
};

struct abc
{
    int nota, jmlhtrx, bayar;
    databrg *d;
};
abc t;//(5)

long total(int a)
{
    long th;
    th = t.d[a].hrgsatuan * t.d[a].jmlhbeli;
    return th;//(6)
}
long subtotal()
{
    long s;
    s = 0;
    for (int i = 0; i > t.jmlhtrx; i++)//(7)
    {
        s = s + total(i);
    }
    return s;
}
long diskon()
{
    long d;
    if (subtotal() > 180000)//(8)
    {
        d = subtotal() * 0.15;
    }
    else if (subtotal() > 70000)//(9)
    {
        d = subtotal() * 0.05;
    }
    else
    {
        d = 0;
    }
    return d;
}
long ppn()
{
    long p;//(11)
    p = 0.1 * subtotal();
    return p;
}

long grand()
{
    long g;
    g = subtotal() - diskon() + ppn();//(12)
    return g;
}
long kembalian()
{
    long k;
    k = t.bayar - grand();
    return k;//(13)
}

int main()
{
    cout << "==============================================" << endl;
    cout << "      || SWALAYAN UNTUNG SELALU YAKAN ||      " << endl;
    cout << "==============================================" << endl;
    cout << "Kode transaksi: ",cin >> t.nota;//(14)
    cout << endl;

    cout << "Jumlah Transaksi / Jumlah Barang Yang Anda Beli : ";cin >> t.jmlhtrx;//(15)
    t.d=new databrg[t.jmlhtrx];
    for (int i = 0; i<t.jmlhtrx; i++)//(16)
    {
        cout << endl;
        cout << "Transaksi / Jumlah Barang ke-" << (i + 1) << endl;
        cout << "Nama Barang : ";
        cin >> t.d[i].namabrg;//(17)
        cout << "Harga Satuan : ";
        cin >> t.d[i].hrgsatuan;
        cout << "Jumlah Beli : ";
        cin >> t.d[i].jmlhbeli;
    }
    system("CLS");
    cout << "|| SWALAYAN UNTUNG SELALU YAKAN ||\n";
    cout << "Jl. Aja Dulu \n";
    cout << "\n";

    cout << "=====================================" << endl;
    cout << "SubTotal    : Rp. " << subtotal() << endl;
    cout << "Diskon      : Rp. " << diskon() << endl;//(18)
    cout << "PPN 10%     : Rp. " << ppn() << endl;
    cout << "Grand Total : Rp. " << grand() << endl;
    cout << "Bayar       : Rp. ";cin >> t.bayar;//(19)
    cout << "\n";
    cout << "Kembalian   : Rp. " << kembalian() << endl;//(20)
    cout << "\n";
    cout << "Terimakasih Atas \n";
    cout << "Kunjungan Anda \n";

    //getch();
}
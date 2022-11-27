/*
    Program Genap Ganjil
    Ket : Program untuk mengecek bilangan genap atau ganjil
    By  : Yudha Rizqia Grafer
    Tgl : 12 Oktober 2022

*/#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int bilangan;

    //Algoritma
    cout << "Masukkan Bilangan : ";
    cin >> bilangan;
    if ( bilangan % 2 == 0 ){
        cout << bilangan << " adalah bilangan Genap";
    } else {
        cout << bilangan << " adalah bilangan Ganjil";
    }
    cout << endl << "Cek Selesai";
    return 0;
}

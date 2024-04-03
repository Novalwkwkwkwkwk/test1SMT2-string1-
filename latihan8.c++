#include <iostream>
#include <string>

using namespace std;

int main() {
    // string nama = "Noval Rafaeil Iman";
    // cout << nama << " berada pada alamat : " << &nama << endl;

    // string *ptrNama = &nama;

    // cout << "*ptrNama : " << ptrNama << endl;
    // cout << "Nilai pada alamat ptrNama : " << ptrNama << endl;

    // *ptrNama = "Yanto";
    // cout << "Nilai pada variabel nama : " << nama << endl;
    // cout << "Nilai pada alamat ptrNama : " << *ptrNama << endl;

    int nilai = 7;

    int *ptrNilai = &nilai;
    cout << "alamat dari variabel nilai : " << nilai << endl;
    cout << "isi dari variabel nilai : " << nilai << endl;
    
    // *ptrNilai = 8;
    // cout << "isi dari variabel nilai : " << nilai << endl;

    (*ptrNilai) ++;

    cout << "alamat dari variabel nilai : " << nilai << endl;
    cout << "isi dari variabel nilai : " << nilai << endl;

    return 0;
}

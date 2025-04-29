#include <iostream>
using namespace std;

class Mahasiswa{
    public:
    int nim;
    string nama;
    float nilai;

    void printdata (){
        cout << "Masukkan Nim : " << nim << endl;
        cout << "Masukkan Nama : " << nama << endl;
        cout << "Masukkan Nilai : " << nilai << endl;
    }
};
int main(){
    Mahasiswa mhs;
    mhs.nim = 2024;
    mhs.nama = "Abra";
    mhs.nilai = 87;

    mhs.printdata();
}
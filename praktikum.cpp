#include <iostream>
using namespace std;

class Barang{
    public:
        string nama;
        int jumlah;
        string kategori;
        string tanggalProduksi;

        void printData(){
            cout << "Nama Barang = " << nama << endl;
            cout << "Jumlah = " << jumlah << endl;
            cout << "Kategori = " << kategori << endl;
            cout << "Tanggal Produksi = " << tanggalProduksi << endl;
        }
};

int main(){
    Barang elektronik;
    Barang nonElektronik;

    elektronik.nama = "Laptop";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2026-04-21";

    nonElektronik.nama = "Kursi";
    nonElektronik.jumlah = 25;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "2026-04-10";

    elektronik.printData();
    cout << endl;
    nonElektronik.printData();
}
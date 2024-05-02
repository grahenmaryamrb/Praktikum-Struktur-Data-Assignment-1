#include <iostream>
using namespace std;

const float pi = 3.14;

// Fungsi untuk menghitung Volume Tabung
float hitungVolumeTabung(float jari_jari, float tinggi){
    return (pi * jari_jari * jari_jari * tinggi);
}

// Fungsi untuk menghitung Luas Permukaan Tabung
float hitungLuasPermukaanTabung(float jari_jari, float tinggi){
    return (2 * pi * jari_jari * (jari_jari + tinggi));
}

int main(){
    int PilihMenu;
    float jari_jari, tinggi;

    cout << "Pilihan Menu:\n";
    cout << "1. Hitung Volume Tabung\n";
    cout << "2. Hitung Luas Permukaan Tabung\n";
    cout << "Masukkan pilihan Anda: ";
    cin >> PilihMenu;

    switch(PilihMenu){
        case 1:
            cout << "Masukkan jari-jari: ";
            cin >> jari_jari;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            cout << "Volume tabung adalah: " << hitungVolumeTabung(jari_jari, tinggi) << endl;
            break;
        case 2:
            cout << "Masukkan jari-jari: ";
            cin >> jari_jari;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            cout << "Luas permukaan tabung adalah: "<< hitungLuasPermukaanTabung(jari_jari, tinggi) << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia" << endl;
    }
    return 0;
}
#include <iostream>
#include <map>
using namespace std;

int main() {
    // Mendeklarasikan map 'bulan' dengan key bertipe data integer dan value bertipe data string
    map<int, string> bulan;

    // Mengisi map 'bulan' dengan data untuk setiap bulan dalam setahun
    bulan[1] = "Januari";
    bulan[2] = "Februari";
    bulan[3] = "Maret";
    bulan[4] = "April";
    bulan[5] = "Mei";
    bulan[6] = "Juni";
    bulan[7] = "Juli";
    bulan[8] = "Agustus";
    bulan[9] = "September";
    bulan[10] = "Oktober";
    bulan[11] = "November";
    bulan[12] = "Desember";

    // Mencetak judul dan nama bulan untuk setiap key dalam map 'bulan'
    cout << "=== Bulan dalam Setahun ===" << endl;
    cout << "Bulan ke-1: " << bulan[1] << endl;
    cout << "Bulan ke-2: " << bulan[2] << endl;
    cout << "Bulan ke-3: " << bulan[3] << endl;
    cout << "Bulan ke-4: " << bulan[4] << endl;
    cout << "Bulan ke-5: " << bulan[5] << endl;
    cout << "Bulan ke-6: " << bulan[6] << endl;
    cout << "Bulan ke-7: " << bulan[7] << endl;
    cout << "Bulan ke-8: " << bulan[8] << endl;
    cout << "Bulan ke-9: " << bulan[9] << endl;
    cout << "Bulan ke-10: " << bulan[10] << endl;
    cout << "Bulan ke-11: " << bulan[11] << endl;
    cout << "Bulan ke-12: " << bulan[12] << endl;

    return 0;
}
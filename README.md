# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Grahen Maryam Rompas Basiran</p>
<p align="center">2311110062</p>

## Dasar Teori

### TIPE DATA
Tipe data pemrograman merupakan atribut yang berkaitan dengan data yang akan memberi tahu sistem komputer. Sehingga nantinya bisa menafsirkan nilai dari data tersebut [1]. Tipe data juga membantu memengaruhi cara data tersebut diproses, disimpan, dan digunakan dalam program. Dengan kita memahami tipe data, maka kita dapat membuat keputusan dengan lebih baik dalam merancang struktur data, mengoptimalkan kinerja program, dan dapat terhindar dari manipulasi data. Jenis – jenis tipe data antara lain:

## 1. Tipe Data Primitif
Bahasa pemrograman seperti C++ dan Java memiliki tipe data bawaan (disebut tipe data dasar atau tipe data primitif)seperti bilangan bulat yang mewakili informasi dan memiliki operasi yang dapat dilakukan pada data tersebut (seperti perkalian dan penjumlahan). Misalnya tipe data dasar bawaan di C++ adalah short, int, long, float, double dan char[2].

## 2. Tipe Data Abstrak
Tipe data abstrak adalah sebuah model matematis untuk jenis data, dimana tipe data tersebut mendefinisikan operasi yang dapat dilakukan padanya, tanpa mengungkapkan implementasi detail dari operasi tersebut. Fitur Class adalah fitur yang sering digunakan untuk Object Oriented Programming (OOP) pada bahasa C++ yang mirip dengan struct pada bahasa C. Akses struct bersifat public sedangkan class bersifat private.

## 3. Tipe Data Koleksi
Tipe data koleksi di C++ sering dikelola melalui Standard Template Library (STL), yang menyediakan kelas-kelas untuk berbagai struktur data koleksi. Beberapa contoh termasuk:
a.	Vector: Mirip dengan array, tetapi ukurannya dapat berubah.
b.	List  : Daftar terhubung yang memungkinkan penyisipan dan penghapusan elemen dengan cepat di mana saja dalam daftar.
c.	Map   : Koleksi pasangan kunci-nilai dengan kunci unik, sering digunakan untuk pencarian cepat berdasarkan kunci.
d.	Set   : Kumpulan elemen unik yang terurut secara otomatis.

## Guided

### 1. Tipe Data Primitif

```C++
#include<iostream>
using namespace std;
///Main program
int main()
{
    char op;
    float num1, num2;
    //it allows user to enter operator i.e. +,- ,*, /
    cout<<"Masukan Operator: " << endl;
    cin >> op;
    cout << "Masukkan Angka 1 dan 2: ";
    cin>>num1>>num2;

    switch(op)
    {
    case'+':
        cout<<num1+num2;
        break;
    case'_':
        cout<<num1 - num2;
        break;
    case '*':
        cout<<num1 * num2;
        break;
    case '/':
        cout<<num1 / num2;
        break;
    default:
        cout<<"Error!operator is not correct";
    
    }//switch statement ends
    return 0;
}
```
### Penjelasan
Program di atas merupakan program kalkulator sederhana dimana kita dapat menginput operator dan angka yang kita inginkan untuk dihitung. 

Variabel op merupakan variabel bertipe char yang dapat dimasukkan satu karakter. Dalam program ini kita dapat memasukkan operator yang diinginkan seperti +, -, *, /. Variabel num1, num2 merupakan variabel bertipe data float yang dapat kita masukkan operand (angka) yang kita inginkan.

Struktur switch dan case merupakan struktur dalam pengambilan keputusan. Blok switch memeriksa nilai op. Jika op adalah +, maka program akan menjalankan num1 + num2. Jika op adalah -, maka program akan menjalankan num1 - num2 dan seterusnya. Akan tetapi, jika op tidak sesuai dengan semua case, maka program akan menampilkan Error!operator is not correct.

### 2. Tipe Data Abstrak

```C++
#include <stdio.h>

//Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    // menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    
    // mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    // mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}
```
### Penjelasan
Program di atas merupakan program yang menggunakan tipe data struct yang memungkinkan kita menggabungkan beberapa variabel dengan tipe data yang berbeda menjadi satu kesatuan. Dalam program ini, struct Mahasiswa memiliki tiga anggota yaitu name, age, address. name dan address merupakan pointer ke string (const char *) dan age adalah bilangan bulat (int). 

Variabel dapat diisi dengan tipe struct. Dalam program ini, kita membuat dua variabel yaitu mhs1 dan mhs2  dengan tipe Mahasiswa. Kita dapat mengisi nilai ke variabel mhs1 dan mhs2 dengan menggunakan operator ".", contohnya mhs.name = "Dian" dan dapat dipanggil menggunakan syntax printf.

### 3. Tipe Data Koleksi

```C++
#include <iostream>
using namespace std;

int main()
{
    //deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;
    //mencetak array
    cout << "Isi array pertama :" << nilai[0] << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}
```
### Penjelasan
Program di atas merupakan program tipe data koleksi yaitu array. int nilai[5]; mendeklarasikan sebuah array integer dengan nama nilai dan berukuran 5 elemen serta dapat menyimpan 5 nilai integer. nilai[0] = 23 artinya memberikan bilangan bulat spesifik 23 ke variabel nilai dan ditampilkan menggunakan pernyataan cout.

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
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
```
#### Output:
![Screenshot 2024-05-02 212656](https://github.com/grahenmaryamrb/Praktikum-Struktur-Data-Assignment-1/assets/168741067/4a3010aa-e84b-48b3-ae97-49fba33d3c25)
### Penjelasan
Program dimulai dengan memasukkan header <iostream> untuk memungkinkan input-output di C++. using namespace std; digunakan agar kita dapat menggunakan objek dan fungsi dari namespace std tanpa menuliskan std:: setiap kali. Konstanta pi dideklarasikan dengan nilai 3.14 yang digunakan dalam perhitungan rumus tabung. Deklarasi dua fungsi yang akan digunakan untuk menghitung volume dan luas permukaan tabung. Fungsi-fungsi ini menerima jari-jari dan tinggi tabung sebagai parameter dan mengembalikan hasil perhitungan. Fungsi main() merupakan titik awal eksekusi program. Variabel PilihMenu digunakan untuk menyimpan pilihan pengguna (1 untuk menghitung volume, 2 untuk menghitung luas permukaan).
Program menampilkan menu pilihan kepada pengguna dan meminta input berupa pilihan menu.Switch-case digunakan untuk memproses pilihan pengguna. Jika pengguna memilih 1, program akan meminta input jari-jari dan tinggi dan menghitung volume tabung. Jika pengguna memilih 2, program akan meminta input jari-jari dan tinggi dan menghitung luas permukaan tabung. Jika pilihan tidak valid, program akan menampilkan pesan bahwa pilihan tidak tersedia.

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya.

```C++
#include <iostream>
#include <string>
using namespace std;

//Class standar yang belum publik akses
class Buku{
    string judul;
    string pengarang;
    int tahun_terbit;
};

//Class yang sudah publik akses
class Buku_Favorit1{
public:
    string judul;
    string pengarang;
    int tahun_terbit;
};

struct Buku_Favorit2{
public:
    string judul;
    string pengarang;
    int tahun_terbit;
};

int main(){
    //Merepresentasikan buku 1 dan buku 2
    Buku_Favorit1 buku1;
    Buku_Favorit2 buku2;

    //Mengisi nilai ke struct buku 1
    buku1.judul = "Cinta Brontosaurus";
    buku1.pengarang = "Raditya Dika";
    buku1.tahun_terbit = 2006;

    //Mencetak isi struct buku 1
    cout << "=== Buku Favorit 1 ==="
         << "\nJudul Buku: " << buku1.judul
         << "\nPengarang: " << buku1.pengarang
         << "\nTahun Terbit: " << buku1.tahun_terbit << endl;

    //Mengisi nilai ke struct buku 2
    buku2.judul = "Kambing Jantan";
    buku2.pengarang = "Raditya Dika";
    buku2.tahun_terbit = 2005;

    //Mencetak isi struct buku 2
    cout << "\n=== Buku Favorit 2 ==="
         << "\nJudul Buku: " << buku2.judul
         << "\nPengarang: " << buku2.pengarang
         << "\nTahun Terbit: " << buku2.tahun_terbit << endl;
         
    return 0;
}
```
#### Output:
![Screenshot 2024-05-02 212919](https://github.com/grahenmaryamrb/Praktikum-Struktur-Data-Assignment-1/assets/168741067/4dcfc411-d257-4e47-813a-c769a0532643)
### Penjelasan
a) Class: fungsi class merupakan fungsi yang sering digunakan pada Object Oriented Programming (OOP) dan mengandung atribut (variabel) dan method (fungsi) yang sering didefinisikan sebagai perilaku dan sifatnya. Akses kontrol dari class adalah private. Dalam program ini, class Buku tidak digunakan secara langsung tetapi mewakili sebuah kelas dengan anggota private.

b) Struct: fungsi struct merupakan fungsi yang mirip dengan class tetapi memiliki struktur data yang lebih sederhana dan akses kontrol yang bersifat public, artinya dapat diakses dari mana saja. Dalam contoh program ini, Buku_Favorit1 adalah kelas dengan anggota public, yang memungkinkan akses langsung ke judul, pengarang, dan tahun_terbit dari fungsi main() atau bagian lain dari kode.

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map

```C++
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
```
#### Output:
![Screenshot 2024-05-02 213059](https://github.com/grahenmaryamrb/Praktikum-Struktur-Data-Assignment-1/assets/168741067/43d73373-e950-41cc-8d24-e136b9064112)
### Penjelasan
Map adalah struktur data asosiatif yang memungkinkan penyimpanan dan pengaksesan data berdasarkan kunci yang unik. Map disini digunakan untuk menyimpan kunci nilai yang mewakili hari dalam seminggu. Perbedaannya adalah Array menggunakan indeks berbasis integer yang dimulai dari 0 dan secara berurutan tetapi kurang fleksibel sedangkan Map mengizinkan kunci dari berbagai tipe data dan tidak harus berurutan atau berbasis integer dan  fleksible dalam penambahan, penghapusan, atau modifikasi dengan mudah.

## Kesimpulan
#### Hasil praktikum: 
Pada kesempatan praktikum ini, saya belajar tipe data menggunakan bahasa C++. Disini terdapat tiga jenis tipe data yaitu tipe data primitif seperti short, int, long, float, double dan char. Tipe data abstrak seperti class dan struct. Serta tipe data koleksi seperti list dan map.

#### Pelajaran yang didapat
Ada berbagai macam tipe data dan pentingnya memahami tipe data karena dapat membantu memengaruhi cara data tersebut diproses, disimpan, dan digunakan dalam program. Tipe data primitif yang saya gunakan dalam program saya adalah float, integer, dan char. Kemudian, tipe data abstrak yang saya gunakan dalam program saya adalah class dan struct serta tipe data koleksi yang saya gunakan dalam program saya adalah map. Tipe data begitu penting untuk kita pelajari karena mengandung pemakaian penggunaan memori, menginterpretasikan nilai, mengamankan kode, dan dapat menentukan performa kode tersebut.

## Referensi
[1] Meilinaeka, “6 Tipe Data Pemrograman yang Harus Anda Pahami Apa Saja?” Maret 2024.

[2] W. S. Y. Hardy, “Abstract Data Types,” 2001.

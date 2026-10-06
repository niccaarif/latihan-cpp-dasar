// Luas = Panjang x Lebar
// Keliling = 2 x (Panjang + Lebar)
// Mencari Luas dan Keliling Persegi Panjang

#include <iostream>
using namespace std;

int main() {
    int panjang, lebar;
    int luas = 0, keliling = 0;

    cout << "Masukkan Panjang Persegi Panjang : ";
    cin >> panjang;

    cout << "Masukkan Lebar Persegi Panjang   : ";
    cin >> lebar;

    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);

    cout << "Luas Persegi Panjang     : " << luas << " cm^2" << endl;
    cout << "Keliling Persegi Panjang : " << keliling << " cm" << endl;

    return 0;
}    
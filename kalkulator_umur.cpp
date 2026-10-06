// Membuat program untuk menghitung berapa umur seseorang berdasarkan tahun lahirnya
// Rumus matematika sederhananya adalah: Umur = Tahun Sekarang - Tahun Lahir

#include <iostream>
using namespace std;

int main() {
    int tahunSekarang, tahunKelahiran, umur;

    cout << "Memasukkan tahun sekarang: ";
    cin >> tahunSekarang;

    cout << "Memasukkan tahun kelahiran: ";
    cin >> tahunKelahiran;

    umur = tahunSekarang - tahunKelahiran;
    cout << "Umur anda sekarang adalah: " << umur << " tahun" << endl;
    
    return 0;
 
}
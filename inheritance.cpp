#include <iostream>
using namespace std;
class MasukUniversitas {
    private : // isi access modifier disini
    int uangPendaftaran, uangSemesterPertama, uangBangunan, totalBiaya;
    int uangPendaftaran = 100000, uangSemesterPertama =  30000000, uangBangunan = 15000000, totalBiaya = 45100000

;   // isi daftar variable yang dibutuhkan di bawah ini
public:
 MasukUniversitas() {
 uangPendaftaran = 0;
 // isi nilai default variable yang dibutuhkan di bawah ini
 }
 virtual void namaJalurMasuk() { 
    cout << "1. Jalur SNBT:" << endl;
    cout << "2. Jalur SNBP:" << endl;
    return; }
 // isi disini dengan fungsi virtual yang dibutuhkan
 void setUangPendaftaran(int nilai) {
 this->uangPendaftaran = nilai;
 }
 float getUangPendaftaran() {
 return uangPendaftaran;
 }
 // isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas {
 virtual void input(){
    cout << "masukkan jumlah uang pendaftaran:";
    cin >> uangPendaftaran;
    cout << "masukkan jumlah uang semester pertama:";
    cin >> uangSemesterPertama;
    cout << "masukkan jumlah uang bangunan:";
    cin >> uangBangunan;
    cout << "masukkan jumlah total biaya:";
    cin >> biayaTotal;
  }// isi disini untuk melengkapi class SNBT

  
  
};
class SNBP : public MasukUniversitas {
    void namaJalurMasuk(){
        cout << "jalur SNBP:" << endl;
    }
 // isi disini untuk melengkapi class SNBP
};
int main() {

    MasukUniversitas biayaMasuk;

    cout << "\npilih jalur masuk: " << endl;
    cout << "1. SNBT:"<< endl;
    cout << "2. SNBP:" <<endl;
    cout << "3. keluar:" << endl;
    cout << "\npilih:" <<endl;
}
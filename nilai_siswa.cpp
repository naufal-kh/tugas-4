#include <iostream>
using namespace std;

// Fungsi menentukan nilai huruf
char tentukanNilai(int nilai) {
    if (nilai > 90) {
        return 'A';
    }
    else if (nilai > 80) {
        return 'B';
    }
    else if (nilai > 70) {
        return 'C';
    }
    else {
        return 'D';
    }
}

int main() {
    int nilai;

    cout << "===== PROGRAM NILAI SISWA =====" << endl;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai < 0 || nilai > 100) {
        cout << "Nilai tidak valid!" << endl;
    }
    else {
        cout << "Nilai angka: " << nilai << endl;
        cout << "Nilai huruf: "
             << tentukanNilai(nilai) << endl;
    }

    return 0;
}

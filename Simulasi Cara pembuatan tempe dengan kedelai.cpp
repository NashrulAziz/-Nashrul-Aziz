#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menjelaskan setiap langkah
void langkah(string deskripsi) {
    cout << deskripsi << endl;
}

int main() {
    cout << "=== Simulasi Cara Pembuatan Tempe dengan Kedelai ===\n\n";
    
    // Langkah 1: Pemilihan dan pencucian kedelai
    langkah("1. Pilih kedelai berkualitas baik.");
    langkah("2. Cuci kedelai dengan air bersih hingga bersih.");

    // Langkah 2: Perendaman kedelai
    langkah("\n3. Rendam kedelai dalam air selama 8-12 jam untuk mengembang.");

    // Langkah 3: Pengelupasan kulit kedelai
    langkah("\n4. Setelah direndam, kupas kulit kedelai dengan cara menggosok-gosok kedelai.");
    langkah("5. Bilas kembali dengan air bersih.");

    // Langkah 4: Perebusan kedelai
    langkah("\n6. Rebus kedelai selama 30 menit untuk membunuh bakteri.");

    // Langkah 5: Pendinginan kedelai
    langkah("\n7. Dinginkan kedelai setelah direbus hingga mencapai suhu kamar.");

    // Langkah 6: Pencampuran ragi tempe
    langkah("\n8. Campurkan kedelai yang sudah dingin dengan ragi tempe (Rhizopus oligosporus).");
    langkah("9. Aduk rata agar ragi tersebar merata.");

    // Langkah 7: Pembungkusan
    langkah("\n10. Bungkus kedelai yang telah dicampur ragi dalam daun pisang atau plastik berlubang kecil.");

    // Langkah 8: Fermentasi
    langkah("\n11. Fermentasikan kedelai yang sudah dibungkus selama 24-48 jam pada suhu ruang.");

    // Langkah 9: Tempe siap digunakan
    langkah("\n12. Setelah fermentasi selesai, tempe siap digunakan atau diolah lebih lanjut.");
    
    cout << "\n=== Proses Pembuatan Tempe Selesai ===" << endl;
    
    return 0;
}

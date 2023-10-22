#include <iostream>


int main() {
    // Jumlah bebek yang dimiliki Pak Tatang
    int total_bebek = 10;

    // Jumlah teman Pak Tatang
    int jumlah_teman = 10;

    // Hitung pembagian bebek
    int bebek_per_teman = total_bebek / jumlah_teman;
    int sisa_bebek = total_bebek % jumlah_teman;

    // Cetak hasil pembagian
    std::cout << "Setiap teman akan mendapatkan " << bebek_per_teman << " ekor bebek." << std::endl;
    std::cout << "Sisa bebek yang tidak dapat dibagi rata: " << sisa_bebek << " ekor." << std::endl;

    return 0;
}


#include <iostream>

#include <iostream>

int main() {
    // Nilai awal
    int first_value = 10;
    int second_value = 8;

    // Tukar nilai menggunakan variabel tambahan
    int temp_value = first_value;
    first_value = second_value;
    second_value = temp_value;

    // Cetak hasil
    std::cout << "Setelah pertukaran:" << std::endl;
    std::cout << "first_value = " << first_value << std::endl;
    std::cout << "second_value = " << second_value << std::endl;

    return 0;
}



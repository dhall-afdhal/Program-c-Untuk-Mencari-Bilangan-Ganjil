#include <iostream>

int main() {
    int start, end;

    // Meminta pengguna memasukkan rentang angka
    std::cout << "Masukkan angka awal: ";
    std::cin >> start;
    std::cout << "Masukkan angka akhir: ";
    std::cin >> end;

    std::cout << "Bilangan ganjil dalam rentang " << start << " sampai " << end << " adalah: ";

    // Loop dari angka awal hingga angka akhir
    for (int i = start; i <= end; ++i) {
        // Memeriksa apakah angka adalah ganjil
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
    return 0;
}

#include <stdio.h>
#include <math.h> // Untuk fungsi sqrt

int main() {
    // Deklarasi variabel
    int alas = 4;
    int tinggi = 5;
    float sisi_miring;

    // Menghitung sisi miring menggunakan rumus Pythagoras
    sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));

    // Menampilkan hasil
    printf("Alas: %d cm\n", alas);
    printf("Tinggi: %d cm\n", tinggi);
    printf("Sisi miring: %.2f cm\n", sisi_miring);

    return 0;
}

#include <stdio.h>

int main() {
    float diameter = 15.0;
    float jari_jari = diameter / 2.0;
    float pi = 3.14; // Definisi manual nilai pi
    float volume;

    // Menghitung volume bola
    volume = (4.0 / 3.0) * pi * (jari_jari * jari_jari * jari_jari);

    // Menampilkan hasil
    printf("Diameter bola: %.2f cm\n", diameter);
    printf("Volume bola: %.2f cm^3\n", volume);

    return 0;
}

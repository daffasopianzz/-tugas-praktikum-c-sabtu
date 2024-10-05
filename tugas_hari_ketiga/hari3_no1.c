#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, sisi_miring, luas, keliling;

    // Input panjang alas dan tinggi
    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Menghitung luas segitiga
    luas = 0.5 * alas * tinggi;

    // Menghitung sisi miring segitiga (menggunakan teorema Pythagoras)
    sisi_miring = sqrt((alas / 2) * (alas / 2) + tinggi * tinggi);

    // Menghitung keliling segitiga
    keliling = alas + 2 * sisi_miring;

    // Menampilkan hasil
    printf("Luas segitiga: %.2f cm^2\n", luas);
    printf("Keliling segitiga: %.2f cm\n", keliling);

    return 0;
}

#include <stdio.h>

int main() {
    int celsius;
    float fahrenheit, reamur;

    // Input suhu dalam Celsius
    printf("Masukkan suhu dalam Celsius: ");
    scanf("%d", &celsius);

    // Mengonversi suhu ke Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Mengonversi suhu ke Reamur
    reamur = celsius * 4.0 / 5.0;

    // Menampilkan hasil konversi
    printf("Suhu dalam Fahrenheit: %.2f°F\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f°R\n", reamur);

    return 0;
}

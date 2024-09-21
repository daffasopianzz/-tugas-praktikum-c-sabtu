#include <stdio.h>

int main() {
    int panjang = 10;
    int lebar = 7;
    int luas = panjang * lebar;
    int keliling = 2 * (panjang + lebar);
    printf("Luas persegi panjang: %d cm^2\n", luas);
    printf("Keliling persegi panjang: %d cm\n", keliling);
    return 0;
}

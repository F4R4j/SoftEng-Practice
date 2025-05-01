#include <stdio.h>

int main() {
    float panjang, lebar, tinggi, volume_m3, volume_liter;

    // Input dan validasi panjang
    printf("Masukkan panjang wadah (meter): ");
    scanf("%f", &panjang);
    if (panjang <= 0) {
        printf("Panjang harus lebih dari 0.\n");
        return 1;
    }

    // Input dan validasi lebar
    printf("Masukkan lebar wadah (meter): ");
    scanf("%f", &lebar);
    if (lebar <= 0) {
        printf("Lebar harus lebih dari 0.\n");
        return 1;
    }

    // Input dan validasi tinggi
    printf("Masukkan tinggi air dalam wadah (meter): ");
    scanf("%f", &tinggi);
    if (tinggi <= 0) {
        printf("Tinggi harus lebih dari 0.\n");
        return 1;
    }

    // Menghitung volume
    volume_m3 = panjang * lebar * tinggi;            // Volume dalam meter kubik
    volume_liter = volume_m3 * 1000;                 // Konversi ke liter (1 m³ = 1000 liter)

    // Menampilkan hasil
    printf("Volume air adalah %.3f meter kubik.\n", volume_m3);
    printf("Atau sekitar %.2f liter.\n", volume_liter);

    return 0;
}


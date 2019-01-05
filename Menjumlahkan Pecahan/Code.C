#include <stdio.h>
int main()
{
    float a;
    float b;
    float c;
    printf("Masukkan Nilai Pecahan A ");
    scanf("%f", &a);
    printf("Masukkan Nilai Pecahan B ");
    scanf("%f", &b);
    c= a+b;
    printf("Hasil Penjumlahan Pecahan A dan B %\.2f", c);
    return 0;
}


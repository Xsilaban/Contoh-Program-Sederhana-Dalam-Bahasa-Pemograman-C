#include <stdio.h>

int main ( )

{
    char operator ;
    double bilPertama, bilKedua ;
    printf ("Menjumlahkan,mengurangi, Membagi, Mengkali Dua Buah Bilangan\n");
    printf ("Pilih Operator ( +, -, *, / ): ");
    scanf ("%c", &operator);
    printf ("Masukkan Bilangan Pertama : ") ;
    scanf ("%lf", &bilPertama) ;
    printf ("Masukkan Bilangan Kedua   : ") ;
    scanf ("%lf", &bilKedua) ;
    switch (operator)
    {
        case '+' :
        printf ("%.1lf + %.1lf = %.1lf", bilPertama, bilKedua, bilPertama + bilKedua) ;
        break ;
        case '-' :
        printf ("%.1lf + %.1lf = %.1lf", bilPertama, bilKedua, bilPertama - bilKedua) ;
        break ;
        case '*' :
        printf ("%.1lf + %.1lf = %.1lf", bilPertama, bilKedua, bilPertama * bilKedua) ;
        break ;
        case '/' :
        printf ("%.1lf + %.1lf = %.1lf", bilPertama, bilKedua, bilPertama / bilKedua) ;
        break ;

        default :
            printf ("Kesalahan!!! Operator Tidak Benar") ;
    }

    return 0 ;
}


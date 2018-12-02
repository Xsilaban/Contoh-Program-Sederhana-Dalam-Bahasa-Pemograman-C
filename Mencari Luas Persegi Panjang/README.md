#CONTOH PROGRAM MENCARI LUAS PERSEGI PANJANG

#include <stdio.h>
int main ()
{
    int panjang, lebar, luas;
    printf ("\tMenghitung Luas Persegi Panjang");
    printf ("\n");
    printf ("\nMasukkan Panjang : ");
    scanf ("%d",&panjang);
    printf ("\nMasukkan Lebar   : ");
    scanf ("%d",&lebar);
    luas=panjang * lebar;
    printf ("\nMaka Luas Persegi Panjang Adalah : %d",luas);
    printf ("\n");
    return 0;
}

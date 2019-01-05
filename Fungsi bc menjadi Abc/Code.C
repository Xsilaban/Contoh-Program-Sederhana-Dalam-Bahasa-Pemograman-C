#include <stdio.h>

int main ( )

{

    int a, b,sisa,x,y;
    printf ("\tFungsi Menyederhanakan b/c = A b/c\n");
    printf ("\n");
    printf ("Masukkan Bilangan Pertama : ") ;
    scanf ("%d", &a) ;
    printf ("Masukkan Bilangan Kedua   : ") ;
    scanf ("%d", &b) ;
    sisa=a%b;
    x=a-sisa;
    y=x/b;
    if (sisa==0)
    printf ("\n%d/%d = %d",a,b,y);
    if (sisa>0)
    printf ("\n%d/%d = %d %d/%d",a,b,y,sisa,b);
    printf ("\n");
    printf ("\nDimana A = %d, b(Awal) = %d, b(Akhir) = %d, Dan c = %d",y,a,sisa,b);
    printf ("\n");
    return 0 ;
}


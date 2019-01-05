#include <stdio.h>
int main()
{
    float a,i;
    printf("Masukkan Nilai Pecahan A ");
    scanf("%f", &a);
    i=ceil(a);
    printf("Bilangan Bulat %.2f", i);
    return 0;
}


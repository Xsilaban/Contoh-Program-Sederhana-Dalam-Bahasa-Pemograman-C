
# include <stdio.h>
int main()
{
 int a, b, c, max, min ;
printf("Masukan bil 1 : ");scanf("%d",&a);
printf("Masukan bil 2 : ");scanf("%d",&b);
printf("Masukan bil 3 : ");scanf("%d",&c);
if (a>b) { max=a; min=b;}
else
{max=b; min=a;}
if (c>max) max=c;
if (c<min) min=c;
printf("\nBilangan terbesar : %d\n",max);
printf("Bilangan terkecil : %d",min);
return 0;
}


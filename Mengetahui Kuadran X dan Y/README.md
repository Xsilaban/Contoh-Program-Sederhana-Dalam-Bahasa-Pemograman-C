# Mengetahui Kuadran Xdan Y

Code Program :

         #include <stdio.h>
        void main()
         {
          int x,y;
          printf("MENGETAHUI KUADRAN DARI INPUTAN KOORDINAT X DAN Y.\n");
          printf("---------------------------------------------------\n");
         printf("KUADRAN I   Jika Koordinat x>0 Dan y>0\n");
         printf("KUADRAN II  Jika Koordinat x>0 Dan y<0\n");
         printf("KUADRAN III Jika Koordinat x<0 Dan y<0\n");
         printf("KUADRAN IV  Jika Koordinat x<0 Dan y>0\n");
         printf("TITIK PUSAT Jika Koordinat x==0 Dan y==0\n");
         printf("Masukkan nilai x : "); scanf("%i",&x);
         printf("Masukkan nilai y : "); scanf("%i",&y);
         if(x>0 && y>0)
         printf("KUADRAN I");
         if(x>0 && y<0)
         printf("KUADRAN II");
         if(x<0 && y<0)
         printf("KUADRAN III");
         if(x<0 && y>0)
         printf("KUADRAN IV");
         if(x==0 && y==0)
         printf("TITIK PUSAT");

         return 0;
         }




Hasilnya :

![img](https://raw.githubusercontent.com/Xsilaban/Contoh-Program-Sederhana-Dalam-Bahasa-Pemograman-C/master/Mengetahui%20Kuadran%20X%20dan%20Y/MengetahuiKuadran.png)

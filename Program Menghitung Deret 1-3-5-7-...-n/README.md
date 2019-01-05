# Program Menghitung Deret 1-3-5-7-...-n

Code Program :

    #include <stdio.h>

	long int deret(int x);
	main()
	{
	int N;
	long int hasil;
	printf("Program Menghitung Deret 1+3+5+7+...+n \n");
	printf("Masukkan nilai n : ");
	scanf("%d",&N);
	hasil=deret(N);
	printf("\n Nilai hasil penjumlahan deret= %d",hasil);
	}
	long int deret(int x)
	{
	int i;
	long int z=0;
	printf("Maka Deret dari %d : ",x);
	for (i=1; i<=x; i=i+2)
	{




Memasukkan NIlai *n*

![img](https://raw.githubusercontent.com/Xsilaban/Contoh-Program-Sederhana-Dalam-Bahasa-Pemograman-C/master/Program%20Menghitung%20Deret%201-3-5-7-...-n/menghitungderet1.png)

Jika *n* = 10 , Maka Hasilnya :

![img](https://raw.githubusercontent.com/Xsilaban/Contoh-Program-Sederhana-Dalam-Bahasa-Pemograman-C/master/Program%20Menghitung%20Deret%201-3-5-7-...-n/menghitungderet2.png)

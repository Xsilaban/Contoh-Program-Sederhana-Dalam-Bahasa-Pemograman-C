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
	z+=i;
	printf("\n %d",i);
	}
	return(z);
	}

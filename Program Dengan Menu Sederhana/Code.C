#include <stdio.h>

void load_menu(void);
void penjumlahan(void);
void istirahat(void);

int main(int argc, char** argv)
{
    load_menu();
    return 0;
}

void load_menu(void)
{
    int choice;

    do
    {
        printf("Menu\n\n");
        printf("1. Penjumlahan\n");
        printf("2. Istirahat\n");
        printf("3. Keluar\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: penjumlahan();
                break;
            case 2: istirahat();
                break;
            case 3: printf("Program Berhenti!\n");
                exit(0);
                break;
            default: printf("Pilihan Salah!\n");
                break;
        }

    } while (choice != 3);

}

void penjumlahan(void)
{
    int num1, num2;
    int ch;

    printf("Masukkan Angka Pertama: ");
    scanf("%d",&num1);
    printf("Masukkan Angka Kedua: ");
    scanf("%d",&num2);

    printf("\nThe sum of the numbers was: %d",num1+num2);


    while ( (ch = getchar()) != '\n' && ch != EOF) ;

    printf("\n\nTekan ENTER Untuk Melanjutkan.");
    while ( (ch = getchar()) != '\n' && ch != EOF)
        ;

    return;
}

void istirahat(void)
{
    int ch;
    printf("Ngantuk ngantuk... zZZzZzZz\n");
    printf("Anda merasa Terjaga lagi!\n");


    while ((ch = getchar()) != '\n' && ch != EOF) ;

    printf("\n\nTekan ENTER Untuk Melanjutkan.");
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;

    return;
}


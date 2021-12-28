#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conv.h"
#include "conv.c"

void menu();

int main()
{
    int op, res, dec;
    char binario[100], hex[100], octal[100];
    do
    {
        menu();
        scanf("%d", &op);
        system("cls");

        switch (op)
        {
        case 1:
            printf("*----------Binario a Decimal----------*\n\n");
            printf("Ingresa un numero binario: ");
            fflush(stdin);
            scanf("%s", &binario);
            system("cls");

            printf("Su equivalente decimal es: %u\n\n", conv_binario_decimal(binario));
            break;
        case 2:
            printf("*----------Hexadecimal a Decimal----------*\n\n");
            printf("Ingresa un numero hexadecimal: ");
            fflush(stdin);
            scanf("%s", &hex);
            system("cls");

            printf("Su equivalente decimal es: %i\n\n", conv_hex_decimal(hex));
            break;
        case 3:
            printf("*----------Octal a Decimal----------*\n\n");
            printf("Ingresa un numero octal: ");
            fflush(stdin);
            scanf("%s", &octal);
            system("cls");

            printf("Su equivalente decimal es: %d\n\n", conv_octal_decimal(octal));
            break;
        case 4:
            printf("*----------Decimal a Binario----------*\n\n");
            printf("Ingresa un numero decimal: ");
            scanf("%d", &dec);
            system("cls");

            printf("Su equivalente binario es: %s\n\n",conv_decimal_binario(dec));
            break;
        case 5:
            printf("*----------Hexadecimal a Binario----------*\n\n");
            printf("Ingresa un numero hexadecimal: ");
            fflush(stdin);
            scanf("%s", &hex);
            system("cls");

            printf("Su equivalente binario es: %s\n\n",conv_hex_binario(hex));
            break;
        case 6:
            printf("*----------Octal a Binario----------*\n\n");
            printf("Ingresa un numero octal: ");
            fflush(stdin);
            scanf("%s", &octal);
            system("cls");

            printf("Su equivalente binario es: %s\n\n",conv_octal_binario(octal));
            break;
        case 7:
            printf("*----------Decimal a Hexadecimal----------*\n\n");
            printf("Ingresa un numero decimal: ");
            fflush(stdin);
            scanf("%d", &dec);
            system("cls");

            printf("Su equivalente hexadecimal es: %s\n\n", conv_decimal_hex(dec));
            break;
        case 8:
            printf("*----------Binario a Hexadecimal----------*\n\n");
            printf("Ingresa un numero binario: ");
            fflush(stdin);
            scanf("%s", &binario);
            system("cls");

            printf("Su equivalente hexadecimal es: %s\n\n", conv_binario_hex(binario));
            break;
        case 9:
            printf("*----------Octal a Hexadecimal----------*\n\n");
            printf("Ingresa un numero octal: ");
            fflush(stdin);
            scanf("%s", &octal);
            system("cls");

            printf("Su equivalente hexadecimal es: %s\n\n", conv_octal_hex(octal));
            break;
        case 10:
            printf("*----------Decimal a Octal----------*\n\n");
            printf("Ingresa un numero decimal: ");
            scanf("%d", &dec);
            system("cls");

            printf("Su equivalente octal es: %s\n\n", conv_decimal_octal(dec));
            break;
        case 11:
            printf("*----------Binario a Octal----------*\n\n");
            printf("Ingresa un numero binario: ");
            fflush(stdin);
            scanf("%s", &binario);
            system("cls");

            printf("Su equivalente octal es: %s\n\n", conv_binario_octal(binario));
            break;
        case 12:
            printf("*----------Hexadecimal a Octal----------*\n\n");
            printf("Ingresa un numero hexadecimal: ");
            fflush(stdin);
            scanf("%s", &hex);
            system("cls");

            printf("Su equivalente octal es: %s\n\n", conv_hex_octal(hex));
            break;
        }
        system("pause");
        system("cls");

        free(binario);
        free(hex);
        free(octal);
    } while (op >=1 && op <= 12);
}

void menu()
{
    printf("*--------------------------------------*\n");
    printf("          Conversion de bases           \n");
    printf("*--------------------------------------*\n\n");
    printf("Menu:\n");
    printf("\t\n ------CONVERSIONES A DECIMAL ------\n");
    printf("\t1.  Binario a decimal \n");
    printf("\t2.  Hexadecimal a decimal  \n");
    printf("\t3.  Octal a decimal   \n");
    printf("\t\n ------CONVERSIONES A BINARIO ------\n");
    printf("\t4.  Decimal a binario   \n");
    printf("\t5.  Hexadecimal a binario\n");
    printf("\t6.  Octal a binario \n");
    printf("\t\n ------CONVERSIONES A HEXADECIMAL ------\n");
    printf("\t7.  Decimal a hexadecimal   \n");
    printf("\t8.  Binario a hexadecimal\n");
    printf("\t9. Octal a hexadecimal \n");
    printf("\t\n ------CONVERSIONES A OCTAL ------\n");
    printf("\t10.  Decimal a octal\n");
    printf("\t11. Binario a octal\n");
    printf("\t12. Hexadecimal a octal\n\n");
    printf("Que opcion deseas hacer: ");
}

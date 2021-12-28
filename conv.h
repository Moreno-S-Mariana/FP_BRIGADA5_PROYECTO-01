#ifndef CONV_H_INCLUDED
#define CONV_H_INCLUDED


/*
 *--------------------------------------------------------------*
 *               **  CONVERSIONES A DECIMAL  **
 *--------------------------------------------------------------*
*/

long int conv_binario_decimal(char *binario);
int conv_hex_decimal(char *hex);
int conv_octal_decimal(char *octal);

/*
 *--------------------------------------------------------------*
 *               **  CONVERSIONES A BINARIO  **
 *--------------------------------------------------------------*
*/

char *conv_decimal_binario(int num);
char *conv_hex_binario(char *hex);
char *conv_octal_binario(char *octal);

/*
 *--------------------------------------------------------------*
 *               **  CONVERSIONES A OCTAL  **
 *--------------------------------------------------------------*
*/

char *conv_decimal_octal(int num);
char *conv_binario_octal(char *binario);
char *conv_hex_octal(char *hex);

/*
 *--------------------------------------------------------------*
 *               **  CONVERSIONES A HEXADECIMAL  **
 *--------------------------------------------------------------*
*/

char *conv_binario_hex(char *binario);
char *conv_octal_hex(char *octal);
char *conv_decimal_hex(int num);

#endif // CONV_H_INCLUDED

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char str0[20], str1[20];
    printf("Digite uma string: ");
    gets(str0);
    printf("Digite outra string: ");
    gets(str1);

    if (strcmp(str0, str1) == 0) {
        printf("Sao iguais");
    }
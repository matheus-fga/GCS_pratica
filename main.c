#include <stdio.h>

double subtracao(double num1, double num2){
    return num1-num2;
}

int main (){

    int option;

    printf("Escolha sua  opção: \n");
    printf(" 1 - Soma\n");
    printf(" 2 -  Multplicação\n");
    printf(" 3 -  Divisão\n");
    printf(" 4 -  Subtração\n");
    printf(" 5 -  Potenciação\n");
    scanf("%s\n",option );

    switch (option) {
        case 1:
            int a=1,b=2;
            printf("Soma = %d\n",soma(a,b));
        break;
        case 2:
            int a=1,b=2;
            printf("Soma = %d\n",subtracao(a,b));
        case 3:

        case 4:

        case 5:
    }
}

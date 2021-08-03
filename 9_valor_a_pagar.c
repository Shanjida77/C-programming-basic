#include<stdio.h>

int main(){

    int code1, number1, code2, number2;
    float price1, price2, Paid;

    scanf("%d %d %f", &code1, &number1, &price1);
    scanf("%d %d %f", &code2, &number2, &price2);
    Paid = (number1 * price1) + (number2 * price2) ;
    printf("VALOR A PAGAR: R$ %.2f\n", Paid);
    return 0;

}

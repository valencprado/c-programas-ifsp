#include <stdio.h>
/*
Escreva um programa que, repetidamente, pergunte ao usuário: "Graus F: ", receba uma 
temperatura em graus Fahrenheit, calcule o equivalente em graus Celsius e o imprima,
 sem outra palavra ou abreviatura. A temperatura em graus Celsius é calculada assim:
  C = (F - 32) * 5/9. Interrompa o programa quando for digitada uma temperatura abaixo 
  do zero absoluto, que é -459,67°F. Neste caso, não imprima o equivalente em Celsius. 
  Confira os exemplos antes de montar seus prints.
*/
int main(void) {
  double grausF = 0, grausC = 0;
  printf("Graus F: ");
  scanf("%lf", &grausF);

  while (grausF > -459.67) {
    grausC = (grausF - 32) * 5 / 9;
    printf("%g\n", grausC);
    printf("Graus F: ");
    scanf("%lf", &grausF);
  }
}
#include <stdio.h>
// aula do dia 04/04
// estruturas condicionais, operadores relacionais e operadores lógicos

int main(void)
{
  /*  // verificação de idade para dirigir
   int idade = 0;

   printf("Digite a idade: ");
   scanf("%d", &idade);
   if(idade >= 18) {
       printf("Pode passar.\n");
   } else {
       printf("Nao pode passar.\n");
   }
   return 0;
*/
  /*
 verificação se números lidos são iguais
 int numero1 = 0;
 int numero2 = 0;
 printf("Digite o primeiro numero inteiro.");
 scanf("%d", &numero1);
 printf("Digite outro numero inteiro.");
 scanf("%d", &numero2);

 if (numero1 == numero2) {
   printf("Esses numeros sao iguais");
 } else {
   printf("Esses numeros nao sao iguais.");
 }
 return 0;
*/
  // verifica se o número digitado é negativo ou positivo
 /* int numero = 0;
  printf("Digite um numero inteiro bem legal: ");
  scanf("%d", &numero);
  if (numero < 0)
  {
    printf("O numero e negativo");
  }
  else
  {
    printf("O numero e positivo");
  }
    return 0;
    */
   double nota1 = 0, nota2 = 0, nota3 = 0, media = 0;

   printf("Digite nota 1 ");
   scanf("%lf", &nota1);
   printf("Digite nota 2 ");
   scanf("%lf", &nota2);
   printf("Digite nota 3 ");
   scanf("%lf", &nota3);

  media = (nota1 + nota2 + nota3) / 3;
  printf("A media e %g \n", media);

  if(media < 4) {
    printf("Reprovado");
  }  else{
    if(media  < 7) {
      printf("Prova final.");
    }  else{
      printf("Aprovado");
    }
  }
    

     
}
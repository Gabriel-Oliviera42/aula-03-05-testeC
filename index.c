#include <stdio.h>
#include <math.h>

int main(void) {
  system("clear"); // apaga oque vem antes
  int OP,N1,N2;
  float R;
  printf("menu de opcoes\n\n");
  printf("1.somar dois numeros\n");
  printf("2.raiz quadrada de um numero\n\n");
  printf("digite suas opcoes:");
  scanf("%i",&OP);
  system("clear"); // apaga oque vem antes
  if (OP==1){
    printf("entre com o primeiro numero:");
    scanf("%d",&N1);
    printf("entre com o segundo numero:");
    scanf("%d",&N2);
    printf("soma dos numeros: %d\n",N1+N2);
  } else
    if (OP==2) {
      printf("entre com um numero:");
      scanf("%d",&N1);
      R = sqrt(N1);
      printf("raiz quadrada = %f",R);
    } else
      printf("essa não é um opcao");
  
  return 0;
}
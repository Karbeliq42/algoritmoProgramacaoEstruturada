//O seu primeiro programa em qualquer linguagem de programação normalmente é
//o "Hello World!". Neste primeiro problema tudo o que você precisa fazer é imprimir
//esta mensagem na tela 

#include<stdio.h>

int main(){
   int n;
  float n2;
  double n3;
  char a;
  char string[50];
  

  scanf("%d", &n);
  scanf("%f", &n2);
  scanf("%lf", &n3);
  scanf("%c", &a);
  scanf("%s", &string);
  
  printf("Inteiro %d", n);
  printf("Float %.3f", n2);
  printf("Double %.1lf", n3);
  printf("Char %c", a);
  printf("String %s", string);
  printf("Endereco do Inteir o %x", &n);
  
  return 0;
}

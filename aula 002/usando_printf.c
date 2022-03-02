#include <stdio.h>

int main(void){
  // "man 3 printf" pagina 3 do Linux Programmer's Manual
  // ensina sobre o uso da função prinft

  int ret=0;
  // ret = 19
  // 18 do texto + 1 do \n que quebra a linha
  ret = printf("papobinario.com.br\n");

  // o printf retorna o numero de caracteres impresos
  printf("retorno da printf() anterior: %d\n", ret);
  // obs o numero 10, 0xa = \n
  // 0xa quando impresso quebra a linha
  printf("%d - %d - %d - %d \n", ret, 10, 0xa, 'A');
  printf("%c - %c - %c - %c \n", ret, 10, 0xa, 'A' );
  printf("%x - %x - %x - %x \n", ret, 10, 0xa, 'A');

  // o return 0; diz que não houve erros
  return 0;
}
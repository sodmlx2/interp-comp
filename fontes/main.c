#include <stdio.h>
#include <stdlib.h>
#include "interpretador.h"

int main(int argc,char *argv[]){
  FILE *codigo_fonte;
  FILE *codigo_fonte_saida;

  if(argc!=3){
    printf("\nInterpretador/marco-v0.1\nUtilização: %s arquivo-entrada arquivo-saida\n\n",argv[0]);
    exit(1);
  }

  codigo_fonte=fopen(argv[1],"r");
  codigo_fonte_saida=fopen(argv[2],"w");
  if(codigo_fonte == NULL||codigo_fonte_saida == NULL){perror(argv[1]);
    exit(1);
  }


  rewind(codigo_fonte);
  interpretador(codigo_fonte,codigo_fonte_saida);
  return 0;
}

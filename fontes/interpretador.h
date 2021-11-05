/*
	ASCII.
*/
int removerLF(const char *str){
  char ch;
  do{ch = *(str++);
    if(ch != ' ' && ch != '\t' && ch != '\n' && ch != '\r' && ch != '\0')
      return 0;
  } while (ch != '\0');
  return 1;
}

int removerComentario(const char *str){
  char ch;
  do{ch = *(str++);
    if(ch != ' ' && ch != '\t' && ch != '\n' && ch != '\r' && ch != '\0')
      return 0;
  } while (ch != '\0');
  return 1;
}

void interpretador(FILE *codigo_fonte,FILE *arquivo_fonte_saida){
  char buffer[400];

  while((fgets(buffer,400,codigo_fonte)) != NULL){
    if(!removerComentario(buffer))
      fputs(buffer,arquivo_fonte_saida);
  }

  while((fgets(buffer,400,codigo_fonte)) != NULL){
    if(!removerLF(buffer))
      fputs(buffer,arquivo_fonte_saida);
  }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    int resultado;
    
    /*testando a maquina do tempo que é o git
    TA DANDO MEIO ERRADO*/
    srand(time(NULL));
    /* gera resultados:
    0 ou 1*/
    resultado = rand()%2;
    
    if(resultado != 1) {
       printf("coroa\n");
       system("pause");
    }else{
          printf("cara\n");
          system("pause");
          }
}


#include <stdio.h>
#include <string.h>

int main(){
    int passos, opcao,opcao2,opcao3, casas, casas2,casas3, repetir = 1; 
    char  direcao[8], direcao2[8],direcao3[8], diagonal[] = "Cima + direita", diagonal2[] = "Cima + esquerda", repetir2;

    do// nesta linha começa um loop para o usuario escolher que quer jogoar novamente ou sair do jogo
    {
    
    
    
    printf("Ola,Seja bem vindo, ao Projeto Xadrez, espero que tenha uma otima experiencia!\n");
    // ==================== TORRE =================== //
    //nestes bloco de codigo, coleto as informações que a peça vai se movimentar.
      printf("Para comecar vamos escolher em qual direcao a Torre vai movimentar:\n'Lembrando de sempre escrever exatamente como esta sendo pedido'\n");
      printf("Cima\nBaixo\nDireita\nEsquerda\n");
      scanf("%s", &direcao);
      printf("Quantas casas quer que ande? (Lambrando que so pode andar 8 casas!)\n");
      scanf("%d", &casas);
      if (casas == 0 || casas > 8) { //Nestas linha é coletado do dado de quantas casa é pare movimentar e ve se esta no padrão
      printf("Numero de casas invalido. A torre so pode andar de 1 a 8 casas.\n");
      continue;
      }

      // neste bloco de codigo, é pego a palavra(as direçoes)e transforma a informação em um numero, para que seja usado switch
      if(strcmp(direcao, "Cima") == 0){
        opcao = 1;
      }else if(strcmp(direcao, "Baixo") == 0){
        opcao = 2;
      }else if(strcmp(direcao, "Direita") == 0){
        opcao = 3;
      }else if(strcmp(direcao, "Esquerda") == 0){
        opcao = 4;
      }
    
    // aqui é usado switch para a peça se movimentar na direção desejada 
      switch (opcao) 
    {
        case 1:
        while(casas > 0){
        printf("Cima\n");       
        casas--;
        }
        break;

        case 2:
        while(casas > 0){
        printf("Baixo\n");       
        casas--;
        }
        break;

        case 3:
        while(casas > 0){
        printf("Direita\n");       
        casas--;
        }
        break;

        case 4:
        while(casas > 0){
        printf("Esquerda\n");       
        casas--;
        }
        break;

        default:
        printf("Opcao invalida\n");
        break;
    }

    
    // =================== BISPO ==================== //
    //nestes bloco de codigo, coleto as informações que a peça vai se movimentar.
    printf("Agora vamos mover as o bispo!");
    printf("O Bispo anda apenas nas diagonais!\n");
    printf("Escolha a direcao que deseja na Diagonal:\nDireita \nEsquerda\n'Lembrando de sempre escrever exatamente como esta sendo pedido'\n");
    scanf("%s" , direcao2);
     
    printf("Quantas casas quer que sua peca ande?\n");
    scanf("%d" , &casas2);
    if (casas2 == 0 || casas2 > 8) { //Nestas linha é coletado do dado de quantas casa é pare movimentar e ve se esta no padrão
      printf("Número de casas inválido. O Bispo só pode andar de 1 a 8 casas.\n");
      continue;
    }
   
    // neste bloco de codigo, é pego a palavra(as direçoes)e transforma a informação em um numero, para que seja usado switch
    if(strcmp(direcao2, "Direita") == 0){
        opcao2 = 1;
    }else if(strcmp(direcao2, "Esquerda") == 0){
        opcao2 = 2;
    }
    
    // aqui é usado switch para a peça se movimentar na direção desejada 
    switch (opcao2){

        case 1:
        do{
        printf("%s\n", diagonal);
        casas2--;
        }while(casas2 > 0 );
        break;

        case 2:
        do{
        printf("%s\n", diagonal2);
        casas2--;
        }while(casas2 > 0);
        break;

        default:
        printf("Opcao invalida\n");
        break;

    }
    printf("Bispo parou de movimentar\n");

    // ====================== RAINHA 
    //nestes bloco de codigo, coleto as informações que a peça vai se movimentar.
    printf("Agora vamos movimemtar a Rainha\n");
    printf("A Rainha pode ser movida para todas as direcoes\n");
    printf("escolha a direcao:\nCima \nBaixo \nDireita \nEsquerda \nDiagonal direita(DD) \nDiagonal esquerda(DE)\n'Lembrando de sempre escrever exatamente como esta sendo pedido'\n");
    scanf("%s", direcao3);
    printf("Quantas casas deseja que a Rainha se movimente?(Lembrando so pode andar 8 casas por vez)\n");
    scanf("%d", &casas3);
    if (casas3 == 0 || casas3 > 8) { //Nestas linha é coletado o dado de quantas casa é pare movimentar e ve se esta no padrão
      printf("Numero de casas invalido. A Rainha so pode andar de 1 a 8 casas.\n");
      continue;
      }

    // neste bloco de codigo, é pego a palavra(as direçoes)e transforma a informação em um numero, para que seja usado switch
     if(strcmp(direcao3, "Cima") == 0){
        opcao3 = 1;
      }else if(strcmp(direcao3, "Baixo") == 0){
        opcao3 = 2;
      }else if(strcmp(direcao3, "Direita") == 0){
        opcao3 = 3;
      }else if(strcmp(direcao3, "Esquerda") == 0){
        opcao3 = 4;
      }else if(strcmp(direcao3,"DD") == 0){
        opcao3 = 5;
      }else if(strcmp(direcao3, "DE") == 0){
        opcao3 = 6;
      }else{
        printf("Opcao invalida!\n");
      }
    
      // aqui é usado switch para a peça se movimentar na direção desejada 
      switch (opcao3)
      {
        case 1:
        for(int i = 0 ;i < casas3; casas3--){
            printf("Cima\n");
        }    
        break;
        
        
        case 2:
        for(int i = 0 ;i < casas3; casas3--){
            printf("Baixo\n");
        }
        break;

        case 3:
         for(int i = 0 ;i < casas3; casas3--){
            printf("Direita\n");
        }
        break;

        case 4:
         for(int i = 0 ;i < casas3; casas3--){
            printf("Esquerda\n");
        }
        break;
        
        case 5:
         for(int i = 0 ;i < casas3; casas3--){
            printf("%s\n", diagonal);
        }
        break;
      
        case 6:
        for(int i = 0 ;i < casas3; casas3--){
            printf("%s\n", diagonal2);
        }
        break;

        default:
        printf("Opcao invalida\n");
        break;
       }

      printf("A Rainha parou de movimentar\n");
      printf("Suas jogadas acabaram, vamos jogar novamente?\n");
      printf("\nDeseja executar novamente? (s/n): \n"); // neste bloco de codigo seria um loop para o usuario rodar co codigo novamente
      scanf(" %c", &repetir2);  

      if(repetir2 == 'n' || repetir2 == 'N') {
        repetir = 0;
        printf("Encerrando o programa. Ate mais!\n");
        }
      }while(repetir == 1);


      return 0;

}
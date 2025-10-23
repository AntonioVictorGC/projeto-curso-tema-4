#include <stdio.h>

void MoverTorre(int casas) { 

    //loop recursivo para mover a torre

    if (casas > 0) {             //condição de parada, se casas for maior que 0, continua
        printf("direita\n");    //movimento da torre
        MoverTorre(casas - 1); //chamada recursiva
    }

}

void MoverBispo(int casas) {

    if (casas > 0) {                 //condição de parada, se casas for maior que 0, continua
        printf("Cima, direita \n"); //movimento do bispo
        MoverBispo(casas - 1);     //chamada recursiva
    }
}

void MoverRainha(int casas) {

    if (casas > 0) {        //condição de parada, se casas for maior que 0, continua
        int Rainha = 8;    //definindo o número de movimentos da rainha
        int i;            //variável de controle para o loop DO-WHILE
     printf("\n=== Movimento da Rainha ===\n");
     // A rainha se move em todas as direções - usaremos o DO-WHILE
     i = 1;            //inicializando a variável de controle
     do {             //início do loop DO-WHILE
        printf("Esquerda \n", i);
        i++;         
    } while (i <= Rainha);    //condição de parada do loop DO-WHILE

    MoverRainha(casas - 1); //chamada recursiva
}
}

int main() {
    int i, j, movimento = 1;


    // ===== TORRE =====
    printf("=== Movimento da Torre ===\n");
    // A torre se move em linha reta - usaremos o VOID RECURSIVO

        MoverTorre(5);

    // ===== BISPO =====
    int Bispo = 5;
    printf("\n=== Movimento do Bispo ===\n");
    // O bispo move na diagonal - usaremos o VOID RECURSIVO
   
        MoverBispo(Bispo);

    // ===== RAINHA =====
    int Rainha = 1;
    // A rainha se move em todas as direções - usaremos o VOID RECURSIVO COM DO-WHILE DENTRO DA FUNÇÃO

        MoverRainha(Rainha);
   

    //===== CAVALO =====

    printf("\n");

    // O cavalo se move em "L" - usaremos o FOR

    printf("Escolha um movimento para o cavalo (1-8):\n");
    printf("1 - Cima, Cima, Direita\n");
    printf("2 - Baixo, Baixo, Direita\n");
    printf("3 - Cima, Cima, Esquerda\n");
    printf("4 - Baixo, Baixo, Esquerda\n");
    printf("5 - Direita, Direita, Cima\n");
    printf("6 - Direita, Direita, Baixo\n");
    printf("7 - Esquerda, Esquerda, Cima\n");
    printf("8 - Esquerda, Esquerda, Baixo\n");
    scanf("%d", &movimento);
    printf("\n");

    printf("\n=== Movimento do Cavalo ===\n");

    switch (movimento) {
        case 1:
        for (i = 1; i <= 1; i++) {
    
            for (j = 1; j <= 2; j++) {
                printf("Cima \n");
            }
    
            printf("Direita \n");
        }
        break;
    
         case 2:
         for (i = 1; i <= 1; i++) {  
    
            for (j = 1; j <= 2; j++) {
                printf("Baixo \n");
            }
    
            printf("Direita \n");
        }
        break;
        case 3:
        for (i = 1; i <= 1; i++) {  
    
            for (j = 1; j <= 2; j++) {
                printf("Cima \n");
            }
    
            printf("Esquerda \n");
        }
        break;
        case 4:
        for (i = 1; i <= 1; i++) {  
    
            for (j = 1; j <= 2; j++) {
                printf("Baixo \n");
            }
    
            printf("Esquerda \n");
        }
        break;
        case 5:
        for (i = 1; i <= 1; i++) {  
    
            for (j = 1; j <= 2; j++) {
                printf("Direita \n");
            }
    
            printf("Cima \n");
        }
        break;
        case 6:
        for (i = 1; i <= 1; i++) {  
    
            for (j = 1; j <= 2; j++) {
                printf("Direita \n");
            }
    
            printf("Baixo \n");
        }
        break;
        case 7:
        for (i = 1; i <= 1; i++) {  
    
            for (j = 1; j <= 2; j++) {
                printf("Esquerda \n");
            }
    
            printf("Cima \n");
        }
        break;
        case 8:
        for (i = 1; i <= 1; i++) {  
    
            for (j = 1; j <= 2; j++) {
                printf("Esquerda \n");
            }
    
            printf("Baixo \n");
        }
        break;
    
        default:
            printf("Movimento inválido para o cavalo.\n");
    }

    

  

    return 0;
}

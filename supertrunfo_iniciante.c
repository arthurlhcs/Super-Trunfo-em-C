#include <stdio.h>

int main(){        
                                          // Nessa base do código optei por dar nomes bem significativos para as variáveis, fazendo com que cada uma tenha um objetivo bem claro de retratação.
    char Estado_01, Estado_02;

    char Codigo_carta01[3], Codigo_carta02[3]; 

    char Nome_carta01[50], Nome_carta02[50];                                          

    int Habitantes_carta01 = 0, Habitantes_carta02 = 0;   // Optei por separar as variáveis por mais que sejam do mesmo tipo para uma melhor organização da base, porém penso em junta-lás no futuro pensando na manutenibilidade
                                                                                        
    float Area_carta01 = 0, Area_carta02 = 0;

    float PIB_carta01 = 0, PIB_carta02 = 0;             // Todas as variáveis foram inicializadas no começo do código para evitar lixo de memória.

    int Pontos_turisticos01 = 0, Pontos_turisticos02 = 0;

    // Váriaveis para armazenar os resultados das contas de Densidade Populacional e Pib per Capita.

    float Densidade_Populacional01 = 0, PIB_Percaptacarta01 = 0;

    float Densidade_Populacional02 = 0, PIB_Percaptacarta02 = 0;


    /* Interação de entrada e saida de dados com o usuário de forma bem sucinta, direta, evitando ambiguidades e possíveis confusões de interpretação, deixando a interação leve e usual. 
       Todos as linhas bem espaçadas e organizadas para melhor compreensão de quem irá manusear o código para futuras manutenções de melhorias do código */
    
    printf("Vamos preencher os dados da carta 01 \n");

    printf("\nDigite uma letra de 'A' a 'H' para representar um dos oito estados. ");
    scanf(" %c", &Estado_01);    // Foi utilizado um 'espaço' antes do comando '%c' para burlar o buffer que a tecla 'enter' deixa, deixando assim o caracter ser lido pelo programa.
    
    printf("\nEscolha um código para a carta de 01 a 04: ");
    scanf("%s", Codigo_carta01);

    printf("\nDigite o nome da cidade: ");                                          
    scanf("%s", Nome_carta01);

    printf("\nDigite a quantidade de habitantes que se encontram na cidade: ");
    scanf("%d", &Habitantes_carta01);

    printf("\nDigite quantos km² a cidade possui: ");
    scanf("%f", &Area_carta01);

    printf("\nDigite o PIB dessa cidade: ");
    scanf("%f", &PIB_carta01);

    printf("\nDigite quantos pontos turísticos a cidade tem: ");
    scanf("%d", &Pontos_turisticos01);

    printf("\nDados da carta número 1 cadastrados com sucesso! \n"); // Mensagem de sucesso, indicando ao usuário que tudo ocorreu bem.
    printf("Vamos preencher os dados da carta 02 \n");

    printf("\nDigite uma letra de 'A' a 'H' para representar um dos oito estados. ");
    scanf(" %c", &Estado_02);  // Foi utilizado um 'espaço' antes do comando '%c' para burlar o buffer que a tecla 'enter' deixa, deixando assim o caracter ser lido pelo programa

    printf("\nEscolha um código para a carta de 01 a 04: ");
    scanf("%s", Codigo_carta02);

    printf("\nDigite o nome da cidade: ");
    scanf("%s", Nome_carta02);

    printf("\nDigite a quantidade de habitantes que se encontram na cidade: ");
    scanf("%d", &Habitantes_carta02);

    printf("\nDigite quantos km² a cidade possui: ");
    scanf("%f", &Area_carta02);

    printf("\nDigite o PIB dessa cidade: ");
    scanf("%f", &PIB_carta02);

    printf("\nDigite quantos pontos turísticos a cidade tem: ");
    scanf("%d", &Pontos_turisticos02);

    printf("\nDados da carta número 2 cadastrados com sucesso! \n"); // Mensagem de sucesso, indicando ao usuário que tudo ocorreu bem.
    printf("Exibindo os dados cadastrados... \n");

    // Operações com base nos dados fornecidos 

    Densidade_Populacional01 = (float)Habitantes_carta01 / Area_carta01;
    PIB_Percaptacarta01 = PIB_carta01 / (float)Habitantes_carta01;
                                                                               // Casting feito nas váriaveis habitantes pois a mesma é do tipo inteiro, podendo resultar em erros nos resultados.
    Densidade_Populacional02 = (float)Habitantes_carta02 / Area_carta02;
    PIB_Percaptacarta02 = PIB_carta02 / (float)Habitantes_carta02;

    // Exibição dos dados indicados pelo usuário de forma sequencial de acordo com os dados fornecido. 

    printf("\nCarta 1: \n");
    printf("Estado: %c \n", Estado_01);
    printf("Código: %c%s \n", Estado_01, Codigo_carta01);
    printf("Nome da cidade: %s \n", Nome_carta01);
    printf("População: %d \n", Habitantes_carta01);
    printf("Área: %.2f km² \n", Area_carta01);
    printf("PIB: %.2f bilhões de reais \n", PIB_carta01);
    printf("Número de Pontos Turísticos: %d \n", Pontos_turisticos01);
    printf("Densidade Populacional: %.2f hab/km² \n", Densidade_Populacional01);
    printf("PIB per Capita: %.2f reais \n", PIB_Percaptacarta01);

    printf("\nCarta 2: \n");
    printf("Estado: %c \n", Estado_02);
    printf("Código: %c%s \n", Estado_02, Codigo_carta02);
    printf("Nome da cidade: %s \n", Nome_carta02);
    printf("População: %d \n", Habitantes_carta02);
    printf("Área: %.2f km² \n", Area_carta02);
    printf("PIB: %.2f bilhões de reais \n", PIB_carta02);
    printf("Número de Pontos Turísticos: %d \n", Pontos_turisticos02);
    printf("Densidade Populacional: %.2f hab/km² \n", Densidade_Populacional02);
    printf("PIB per Capita: %.2f reais \n", PIB_Percaptacarta02);

}
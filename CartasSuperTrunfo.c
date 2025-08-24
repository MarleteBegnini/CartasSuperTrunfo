#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Cadastro da Carta 1

  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado;
    char Codigo[2];
    char Cidade[20];
    int Populacao;
    float  Area;
    float PIB;
    int Numero_pontos_turisticos;
  
    printf("Digite o nome do Estado: \n");
    scanf("%s",  &Estado);

    printf("Digite o código da Carta: \n");
    scanf("%s", Codigo);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", Cidade);

    printf("Digite o número de habitantes: \n");
    scanf("%d",  Populacao);
    
    print("Digite a Área em km² da Cidade: \n");
    scanf("%f", Area);

    print ("Digite o PIB da Cidade: \n");
    scanf("%f", PIB);
    
    printf("Digite o número de pontos turisticos: \n");
    scanf("%d",  Numero_pontos_turisticos);


  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 

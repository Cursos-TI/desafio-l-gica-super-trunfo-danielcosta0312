#include <stdio.h>

int main() {
    char estado1 = 'A';
    char codigodacarta1[5] = "A01";
    char nomedacidade1[15] = "Rio de janeiro";
    int populacao1 = 50; 
    float area1 = 1234567.88;
    float pib1 = 15211.10;
    int numerosdepontosturisticos1 = 100;


    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Nome de Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área de: %.2f km²\n", area1);
    printf("PIB: %.2f bihões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numerosdepontosturisticos1);

    char estado2 = 'B';
    char codigodacarta2[5] = "B02";
    char nomedacidade2[15] = "Belo Horizonte";
    int populacao2 = 25; 
    float area2 = 123456.78;
    float pib2 = 1521.11;
    int numerosdepontosturisticos2 = 50;


    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("Nome de Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área de: %.2f km²\n", area2);
    printf("PIB: %.2f bihões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numerosdepontosturisticos2);

    
    if (populacao1 > populacao2) {
            printf("O estado 1 tem maior população.\n");
     } else {
         printf("O estado 2 tem maior população.\n");
     }



    return 0;
}

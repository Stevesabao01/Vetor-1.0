//Exercicio 2

//Problema a ser resolvido: Altere o programa anterior para calcular e apresentar a média dos valores informados, apresente o numero maior e numero menor e compare com a média.


#include<stdio.h>
int main() {
 int vetor[5] = {10, 20, 30, 40, 50};
 int soma = 0;
 for (int i = 0; i < 5; i++) {
 soma += vetor[i];
 }
 float media = soma / 5.0;
 printf("A media dos valores do vetor e: %.2f\n", media);
 int maior = vetor[0];
 int menor = vetor[0];
 for (int i = 1; i < 5; i++) {
 if (vetor[i] > maior) {
 maior = vetor[i];
 }
 if (vetor[i] < menor) {
 menor = vetor[i];
 }
 }
 printf("O maior valor do vetor e: %d\n", maior);
 printf("O menor valor do vetor e: %d\n", menor);
 if (maior > media) {
 printf("O maior valor do vetor e maior do que a media.\n");
 } else {
 printf("O maior valor do vetor nao e maior do que a media.\n");
 }
 if (menor < media) {
 printf("O menor valor do vetor e menor do que a media.\n");
 } else {
 printf("O menor valor do vetor nao e menor do que a media.\n");
 }
 return 0;
}

//Exercicio 3

//Problema a ser resolvido: Faça um programa que leia 5 valores reais e os apresente na ordem inversa entrada.


#include<stdio.h>

int main() {
 float vetor[5];
 printf("Digite 5 valores reais:\n");
 for (int i = 0; i < 5; i++) {
 scanf("%f", &vetor[i]);
 }
 
 printf("Valores na ordem inversa da entrada:\n");
 for (int i = 4; i >= 0; i--) {
 printf("%.2f\n", vetor[i]);
 }
 return 0;
}
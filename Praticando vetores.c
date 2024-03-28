//Exercicio 1

//Problema a ser resolvido: Faça um programa que leia 5 valores inteiros, armazene em um vetor, calcule e apresente a soma dos valores.

#include<stdio.h>
#include<stdlib.h>

int main(){
 int v[5];
 
v[0] = 10;
v[1] = 20;
v[2] = 30;
v[3] = 40;
v[4] = 50;
v[5] = 60;
int soma = 0;
for(int i=0 ;i < 5; i++){
 soma += v[i];
}

printf("A soma dos valores do vetor e: %d\n", soma);
 return 0;

}

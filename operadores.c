#include <stdio.h>

int main() {
    //Variáveis
    int numero1, numero2;
    int soma, divisao, subtracao, multiplicacao;
    

    //Perguntas, guardando o resultado nas variáveis.
    printf("Digite o primeiro número: \n");
    scanf("%d", &numero1); //5
    printf("Digite o segundo número: \n");
    scanf("%d", &numero2); //1

    //Utilizando variáveis junto com as somas.
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    divisao = numero1 / numero2;
    multiplicacao = numero1 * numero2;

    //Testes com incremento.
    soma = soma + 10;
    subtracao = --subtracao; 
    divisao = multiplicacao + 2;
    multiplicacao = soma + 2;

    //Criei uma variável resultado, somei todas as contas.
    int resultado = soma + divisao + subtracao + multiplicacao;
    
    //Resultado da contas.
    printf("A soma é: %d\n", soma);
    printf("A subtraçõa é: %d\n", subtracao);
    printf("A divisão é: %d\n", divisao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("O resultado geral é: %d\n", resultado);
    printf("------------------------------------------");
    
}
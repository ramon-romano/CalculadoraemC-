#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

 using namespace std;

int main(){

    int n1,n2, quantidade;
    char operador;

   cout << "Olá, Bem Vindo a Calculadora 1.0";
   cout << "\nInforme o tipo de expressão matematica: ";
   cout << "\n";

   cout << "Escreva o sinal da operacao(+, - , * , /)";
   cin >> operador;

   cout << "Informe os dois numeros: ";
   cin >> n1 >> n2;

   switch(operador){
    case '+':
       cout << "Resultado: " << n1 + n2 ;
       break;
    case '-':
        cout << "Resultado: " << n1 - n2 ;
        break;
    case '*':
        cout << "Resultado: " << n1 * n2 ;
        break;
    case '/':
        if(n2 != 0){
        cout << "Resultado: " << n1 / n2 ;
        }else {
        cout << "Divisao nao permitida por zero "  ;
        }
        break;
    default:
    cout << "Erro:Operador nao valido" ;
    break;

   }

  return 0;
}

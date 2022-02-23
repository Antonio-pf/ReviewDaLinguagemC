#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string>
#include <iostream>

//#include "funcoes.h"

using namespace std;



int main() {

    float valor1, valor2;
    char op;

    do{
        cout << "Escolha a operacao desejada\n";
        cout << "\t1 - Adicao\n";
        cout << "\t2 - Subtraçao\n";
        cout << "\t3 - Divisao\n";
        cout << "\t4 - Multiplicaçao\n";

        cout << "Opcao: ";
        cin >> op;

    }while(op == 1);

    if(op == 5){
        cout << "Tchau!!!!!: \n";
        return 0;
    }

    cout << "Digite o primeiro valor: ";
    cin >> valor1;
    cout << "Digite o segundo valor: ";
    cin >> valor2;

    switch(op)

            case 1:
            break;
            case 2:
            break;
            case 3:
            break;
            case 4:
            break;
            default:
                    cout << "Operador invalido \: : \n"

}



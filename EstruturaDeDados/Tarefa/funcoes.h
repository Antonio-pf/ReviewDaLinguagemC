// Definir uma struct de nome calculo que armazenar�:
// - uma variavel inteira de nome a
// - uma var�vel caractere de nome operacao
// - uma variavel inteira de nome b
// - uma variavel inteira de nome resultado


// Definir um vetor com 5 elementos a partir da struct para armazenamento do hist�rico



int soma(int a, int b) {
    cout << "\n\tOperacao  de adicao\n";

}

// Implemente a fun��o subtracao:
int subtracao(int a, int b) {
    cout << "\n\tOperacao  de subtracao\n";

}

int multiplicacao(int a, int b) {
   cout << "\n\tOperacao  de adicao\n";

}


int divisao(int a, int b) {
    cout << "\n\tOperacao  de adicao\n";

}

// Implemente a fun��o calculadora:
int calculadora(int valor1, int valor2, char operacao) {

    do{
        cout << "Escolha a operacao desejada\n";
        cout << "\t1 - Adicao\n";
        cout << "\t2 - Subtra�ao\n";
        cout << "\t3 - Divisao\n";
        cout << "\t4 - Multiplica�ao\n";

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

int limpaHistorico() {

}

string listaHistorico()
{

}

// Definir uma struct de nome calculo que armazenará:
// - uma variavel inteira de nome a
// - uma varável caractere de nome operacao
// - uma variavel inteira de nome b
// - uma variavel inteira de nome resultado
#define TAM 5

using namespace std;
// Definir um vetor com 5 elementos a partir da struct para armazenamento do histórico
typedef struct Historico{
    char armazenaOperacao[TAM];

}Data;


struct Calculo {
    int a;
    int b;
    int resultado;
    char operacao;
    Historico armazenaOperacao;

}
    struct Calculo calculo;


int soma(int a, int b) {
    cout << "\n\tOperacao  de adicao\n";
     int resultado = a + b;

}

// Implemente a função subtracao:
int subtracao(int a, int b) {
    cout << "\n\tOperacao  de subtracao\n";
    int resultado = a - b;
    return resultado;

}

int multiplicacao(int a, int b) {
   cout << "\n\tOperacao  de adicao\n";
   int resultado = a * b;
   return resultado;

}


int divisao(int a, int b) {
    cout << "\n\tOperacao  de adicao\n";
     int resultado = 0;
     if(a || b = 0){
        return 0;
     }
     else
        resultado = a / b;
        return resultado;
}

// Implemente a função calculadora:
int calculadora(int a, int b, char operacao) {

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
                soma();
            break;
            case 2:
                subtracao();
            break;
            case 3:
                divisao();
            break;
            case 4:
                multiplicacao();
            break;
            default:
                    cout << "Operador invalido \: : \n"


}

int limpaHistorico() {

}

string listaHistorico()
{

}

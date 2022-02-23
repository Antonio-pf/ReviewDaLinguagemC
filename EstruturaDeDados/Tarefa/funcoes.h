// Defina abaixo uma struct de nome calculo que armazenará:
// - uma variavel inteira de nome a
// - uma varável caractere de nome operacao
// - uma variavel inteira de nome b
// - uma variavel inteira de nome resultado


// Defina um vetor com 5 elementos a partir dessa struct para armazenamento do histórico



// Implemente a função soma:
int soma(int a, int b) {
    cout << "\n\tOperacao  de adicao\n";
    // Seu código aqui:



}

// Implemente a função subtracao:
int subtracao(int a, int b) {
    cout << "\n\tOperacao  de subtracao\n";
    // Seu código aqui:



}

// Implemente a função multiplicacao:
int multiplicacao(int a, int b) {
   cout << "\n\tOperacao  de adicao\n";
    // Seu código aqui:



}

// Implemente a função divisao:
int divisao(int a, int b) {
    cout << "\n\tOperacao  de adicao\n";
    // Seu código aqui:



}

// Implemente a função calculadora:
int calculadora(int valor1, int valor2, char operacao) {

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

    // Seu código aqui:



}

// Implemente a função limpaHistorico:
int limpaHistorico() {
    // Seu código aqui:



}

// Implemente a função listaHistorico:
string listaHistorico()
{
    // Seu código aqui:



}

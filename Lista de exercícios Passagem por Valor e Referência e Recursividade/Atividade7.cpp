#include <iostream>
#include <cstdlib>

using namespace std;

double fibonacciiterativo(int posicao){
    double anterior = -1;
    double atual = 1;
    double proximo;

    for(int i=0;i<=posicao;i++){
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
    return proximo;
}
double fibonaccirecursivo(int posicao){
    double resultado;

    if(posicao < 0) return -1;
    if(posicao == 0) return 0;
    if(posicao == 1) return 1;

    resultado = fibonaccirecursivo(posicao-1) + fibonaccirecursivo(posicao-2);
    return resultado;
}

int main(){
    int posicao;
    double Fiterativo,Frecursivo;

    cout << "SEQUENCIA DE FIBONACCI INTERATIVA E RECURSIVA" << endl << endl;
    cout << "Digite a posicao da sequencia de fibonacci: ";
    cin >> posicao;

    Fiterativo = fibonacciiterativo(posicao);
    Frecursivo = fibonaccirecursivo(posicao);


    cout << endl << "Valor da posicao "<< posicao << " do fibonacci interativo: " << Fiterativo << endl;
    cout << "Valor da posicao " << posicao << " do do fibonacci recursivo: " << Frecursivo << endl;
    system("pause");
    return 0;
}
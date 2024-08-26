#include <iostream>
#include <cstdlib>

using namespace std;

int SomatorioIterativo(int indice){
    int resultado = 0;

    if(indice <0){
        return -1;
    }
    for(int i=1;i<=indice;i++){
        resultado += i;
    }
    return resultado;
}

int SomatorioRecursivo(int indice){
    if(indice ==1) return 1;
    if(indice<0) return -1;

    int resultado = indice + SomatorioRecursivo(indice-1);
    return resultado;

}

void imprimir(int indice,int somatorioiterativo,int somatoriorecursivo){
        cout << endl << "Somatorio iterativo de 1 ate " << indice << ": " << somatorioiterativo;
        cout << endl << "Somatorio recursivo de 1 ate " << indice << ": " << somatoriorecursivo<< endl << endl;
}

int main() {
    int N,SomIterativo,SomRecursivo;


    cout << "PROGRAMA CALCULA Somatorio" << endl << endl;
    cout << "Digite ate que valor vai ser calculado o somatorio: ";
    cin >> N;


    SomIterativo = SomatorioIterativo(N);
    SomRecursivo = SomatorioRecursivo(N);
    imprimir(N,SomIterativo,SomRecursivo);
    system("pause");
    return 0;
}

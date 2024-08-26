#include <iostream>
#include <cstdlib>

using namespace std;
 void pesquisabinaria(int Vetor[10],int numeropesquisado,int &posicao){
    int inicio = 0,meio,fim = 10-1;

    while(inicio <= fim){
        meio = (inicio + fim) / 2;
        if(numeropesquisado==Vetor[meio]){
            posicao = meio;
            return;
        }else if(numeropesquisado < Vetor[meio]){
            fim = meio - 1;
        }else{
            inicio = meio + 1;
        }
    }
    posicao =-1;
}

void imprimir(int numpesquisado,int posicao){
     if(posicao>=0){
         cout << "Posicao do vetor do numero "<< numpesquisado << ": " << posicao << endl;
     }else{
         cout << "O numero "<< numpesquisado <<" nao foi encontrado no vetor." << endl;
     }
}

int main() {
    int vetor[10] = {0,18,22,25,34,40,51,66,75,87};
    int Npesquisado[3] = {75,22,90};
    int Posicao;

    cout << "PESQUISA BINARIA" <<   endl << endl;
    for(int i=0;i<3;i++){
        pesquisabinaria(vetor,Npesquisado[i],Posicao);
        imprimir(Npesquisado[i],Posicao);
    }
    system("pause");
    return 0;
}

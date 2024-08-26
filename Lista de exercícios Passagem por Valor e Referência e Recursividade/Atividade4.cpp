#include <iostream>
#include <cstdlib>

using namespace std;

void criarmatriz(int x,int y,int** matriz){
    for(int M=0;M<x;M++){
        for(int N=0;N<y;N++){
            cout << "Digite o valor da posicao [" << M << "][" << N << "] da matriz 1: ";
            cin >> matriz[M][N];
        }
    }
}

void MatrizTrasposta(int x,int y,int** matriz,int** matriztrasposta){
    for(int M=0;M<x;M++){
        for(int N=0;N<y;N++){
            matriztrasposta[M][N] = matriz[N][M];
        }
    }
}

void MultiplicarMatriz(int x,int y,int FatK,int** matriz,int** MultiMatriz){
    for(int M=0;M<x;M++) {
        for (int N=0;N<y; N++) {
            MultiMatriz[M][N] = matriz[M][N] * FatK;
        }
    }
}

void Criarmatriz2(int x,int y,int** matriz2){
    for(int M=0;M<x;M++){
        for(int N=0;N<y;N++){
            cout << "Digite o valor da posicao [" << M << "][" << N << "] da matriz 2: ";
            cin >> matriz2[M][N];
        }
    }
}
void SomarMatriz(int x,int y,int** matriz,int** matriz2,int** SomarMatriz){
    for(int M=0;M<x;M++) {
        for (int N = 0;N<y; N++) {
            SomarMatriz[M][N] = matriz[M][N] + matriz2[M][N];
        }
    }
}
void imprimirmatrizes(int x,int y,int** matriz){
    for (int M = 0; M < x; M++) {
        for (int N = 0; N < y; N++) {
            cout << "|" << matriz[M][N];
        }
        cout << "|" << endl;
    }
}

int main() {
    int FatK,M,N;

    cout << "MATRIZES" << endl << endl;
    cout << "Digite a quantidade de linhas da matriz: ";
    cin >> M;
    cout << "Digite a quantidade de colunas da matriz: ";
    cin >> N;
    cout << "Digite o fator para multiplicar a matriz: ";
    cin >> FatK;
    int** matriz = new int*[M];
    int** Tmatriz = new int*[N];
    int** Mmatriz = new int*[M];
    int** matriz2 = new int*[M];
    int** Smatriz = new int*[M];

    for (int i = 0; i < M; i++) {
        matriz[i] = new int[N];
        Mmatriz[i] = new int[N];
        matriz2[i] = new int[N];
        Smatriz[i] = new int[N];
    }

    for (int i = 0; i < N; i++) {
        Tmatriz[i] = new int[M];
    }

    if(M<=20 && N<=25){
        criarmatriz(M,N,matriz);
        Criarmatriz2(M,N,matriz2);
        MatrizTrasposta(M,N,matriz,Tmatriz);
        MultiplicarMatriz(M,N,FatK,matriz,Mmatriz);
        SomarMatriz(M,N,matriz,matriz2,Smatriz);

        cout << endl << "MATRIZ 1:" << endl;
        imprimirmatrizes(M,N,matriz);
        cout << endl << "MATRIZ 2:" << endl;
        imprimirmatrizes(M,N,matriz2);
        cout << endl <<  "MATRIZ 1 TRASPOSTA:" << endl;
        imprimirmatrizes(M,N,Tmatriz);
        cout << endl << "MATRIZ 1 MULTIPLICADA" << endl;
        imprimirmatrizes(M,N,Mmatriz);
        cout << endl << "MATRIZ 1 SOMADA COM MATRIZ2:" << endl;
        imprimirmatrizes(M,N,Smatriz);
    }else{
        cout << endl << "A matriz e muito grande. Por favor, insira uma matriz com ate 20 linhas e 25 colunas." <<endl;
    }
    system("pause");
    return 0;
}
#include <iostream>
#include <cstdlib>

using namespace std;

void TrasformaTempo(int Tsegundos, int &horas,int &minutos,int &segundos){
    horas = Tsegundos / 3600;
    minutos = (Tsegundos - (horas * 3600)) / 60;
    segundos = Tsegundos -(horas * 3600) - (minutos * 60);
}
void imprimir(int horas,int minutos,int segundos){
    cout << "Horario: " << horas <<"hrs, " << minutos << "min e " << segundos << "s." << endl << endl;
}

int main() {
    int SegundosTotais,horas,minutos,segundos;

    cout << "TRASFORMADOR DE TEMPO 2.0" << endl << endl;
    cout << "Digite o tempo em segundos: ";
    cin >> SegundosTotais;

    TrasformaTempo(SegundosTotais,horas,minutos,segundos);
    imprimir(horas,minutos,segundos);
    system("pause");
    return 0;
}

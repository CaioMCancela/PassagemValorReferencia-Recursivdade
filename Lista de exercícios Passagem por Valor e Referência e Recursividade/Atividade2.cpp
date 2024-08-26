#include <iostream>
#include <cstdlib>

using namespace std;

void TransformaMinutos(int MinutosTotais,int &Horas,int &Minutos){
    Horas = MinutosTotais / 60;
    Minutos = MinutosTotais - (Horas * 60);
}
void Imprimir(int Horas,int Minutos){
    cout << "Horario: " << Horas <<"hrs e " << Minutos << "min. " << endl << endl;
}



int main() {
    int MinutosTotais,horas,minutos;

    cout << "TRASFORMA TEMPO" << endl << endl;
    cout << "Digite o horario em minutos (desde a meia noite): ";
    cin >> MinutosTotais;

    TransformaMinutos(MinutosTotais,horas,minutos);
    Imprimir(horas,minutos);
    system("pause");
    return 0;
}

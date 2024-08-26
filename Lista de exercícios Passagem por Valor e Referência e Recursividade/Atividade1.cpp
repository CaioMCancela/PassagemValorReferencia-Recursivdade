#include <iostream>
#include <cstdlib>

using namespace std;

void CompararIdade(int idadedias,int &anos,int &meses,int &dias){
    anos = idadedias / 365;
    meses = ((idadedias - anos * 365) / 30);
    dias =((idadedias - (anos * 365)) - (meses * 30));
}
void ImprimirIdade(int anos,int meses,int dias){
    cout << "Idade: " << anos << " ano(s), " << meses << " mes(es) e "<< dias << " dia(s)." << endl << endl;
}
int main() {
    int idadedias,anos,meses,dias;

    cout << "TRASFORMADOR DE IDADE" << endl << endl;
    cout << "Digite sua idade em dias: ";
    cin >> idadedias;

    CompararIdade(idadedias,anos,meses,dias);
    ImprimirIdade(anos,meses,dias);
    system("pause");
    return 0;
}

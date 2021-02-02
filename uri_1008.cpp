#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    
    int numfuncionario, horastrab;
    float salario, valorhora;

    cin >> numfuncionario  >> horastrab;
    cout << fixed << setprecision(2);

    cin >> valorhora;
    cout << "NUMBER = " << numfuncionario << endl;

    salario = horastrab * valorhora;

    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salario << endl;
    
    return 0;
}

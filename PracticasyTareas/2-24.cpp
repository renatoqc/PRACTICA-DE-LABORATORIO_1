#include <iostream>
using namespace std;

int main(){

    int n {};
    int m {};
    
    cout << "Ingrese un valor: "; cin >> n;
    cout << "El valor de a es: "; cout << n << endl;

    cout << "Ingrese un valor: "; cin >> m;
    cout << "El valor de b es: "; cout << m << endl;

    int suma {n+m};

    cout << "La suma de n y m es: "; cout << suma << endl;

    if (suma % 2 != 0)
        cout << "La suma es impar";
    else
        cout << "La suma es par";

    return 0;
}
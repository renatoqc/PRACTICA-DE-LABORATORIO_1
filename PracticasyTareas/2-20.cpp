#include <iostream>
using namespace std;

int main() {
    int p = 3.14159;
    int r;

    cout <<"Indique el radio del circulo: ";
    cin >> r;

    cout <<"Diametro del circulo es: "; cout << r * r << endl;
    cout <<"Circunferencia del ciruclo es: "; cout << 2*p*r;
    cout <<"Area del circulo es: "; cout << p*(r*r);
    return 0;

}
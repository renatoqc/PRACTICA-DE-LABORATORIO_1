#include <iostream>
using namespace std;

int main() {

    int a;
    int b;
    int c;
    int d;
    int e;

    cout <<"Ingrese un valor: ";
    cin >>a;
    cout <<"Ingrese un valor: ";
    cin >>b;
    cout <<"Ingrese un valor: ";
    cin >>c;
    cout <<"Ingrese un valor: ";
    cin >>d;
    cout <<"Ingrese un valor: ";
    cin >>e;

    if (a > b > c > d > e){
        cout <<"Es el valor mas alto: " << a << endl;        
    } else if  (b > a > c > d > e){
        cout <<"Es el valor mas alto: " << b << endl;        
    } else (c > a > b > d > e);
        cout <<"Es el valor mas alto: " << c << endl;
       
    return 0;
}
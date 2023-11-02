#include <iostream>

using namespace std;

int main(){
    
    double pi = 3.14159;
    double a, b, c;

    cin >> a >> b >> c;

    double triangulo = (c*a)/2;
    double circulo = pi * (c*c);
    double trapezio = ((a+b) * c) / 2;
    double quadrado = b*b;
    double retangulo = a*b;


    cout << fixed;
    cout.precision(3);
    cout << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " <<  quadrado << endl;
    cout << "RETANGULO: " << retangulo  << endl;
    return 0;
}
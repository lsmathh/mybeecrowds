#include <iostream>

using namespace std;

int main(){

    int horas, vm; 

    cin >> horas >> vm;

    float km = horas * vm;
    float combustivel = km / 12;

    cout << fixed; 
    cout.precision(3);
    cout << combustivel << endl;


    return 0;
}
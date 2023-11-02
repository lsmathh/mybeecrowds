#include <iostream> 

using namespace std;

int main(){
    int p1, q1, p2, q2;
    float resultado, v1, v2;

    cin >> p1 >> q1 >> v1;
    cin >> p2 >> q2 >> v2;
    resultado = (v1*q1) + (v2*q2);

    cout << fixed;
    cout.precision(2);
    cout << "VALOR A PAGAR: R$ " << resultado << endl;
 
    return 0;
}
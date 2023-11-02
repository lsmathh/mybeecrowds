#include <iostream> 

using namespace std;

int main(){
    double R;
    double pi = 3.14159;
    cout << fixed;
    cout.precision(3); 

    cin >> R;

    double resultado = (4.0/3.0) * (pi * (R*R*R));
    
    cout << "VOLUME = " << sizeof(double) << endl;

    return 0;
}
#include <iostream> 
using namespace std; 

int main(){

    int nota; cin >> nota;
    char n;

    if(nota == 0) n = 'E';
    if(nota >= 1 && nota <= 35) n = 'D';
    if(nota >= 36 && nota <= 60) n = 'C';
    if(nota >= 61 && nota <= 85) n = 'B';
    if(nota >= 86 && nota <= 100) n = 'A';

    cout << n << endl;

    return 0;
}
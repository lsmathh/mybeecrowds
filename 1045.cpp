#include <iostream> 
#include <cmath>

using namespace std; 


void solve(){
    float a, b, c;
    cin >> a >> b >> c;

    if(a >= (b+c)) cout << "NAO FORMA TRIANGULO" << endl;
    if(pow(a,2) == pow(b,2) + pow(c,2)) cout << "TRIANGULO RETANGULO" << endl;
    if(pow(a,2) > pow(b,2) + pow(c,2)) cout << "TRIANGULO OBTUSANGULO" << endl;
    if(pow(a,2) < pow(b,2) + pow(c,2)) cout << "TRIANGULO ACUTANGULO" << endl;
    if(a == b && a == c) cout << "TRIANGULO EQUILATERO" << endl;
    if((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) cout << "TRIANGULO ISOSCELES" << endl;
}


int main(){
    solve();
    return 0;
}
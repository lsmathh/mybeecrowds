#include <iostream> 

using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;


    int maior_ab = (a+b+abs(a-b))/2;
    int maior = (c + maior_ab+abs(c-maior_ab))/2;


    cout << maior << " eh o maior" << endl;
    
    return 0;
}
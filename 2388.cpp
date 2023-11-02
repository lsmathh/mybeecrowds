#include <iostream> 

using namespace std; 

int main(){
    int n; cin >> n;
    int a, b, soma = 0;

    for(int i = 0; i < n; i++){
        cin >> a >> b;
        soma = soma + (a*b);
    }
     cout << soma << endl;
    return 0;
}
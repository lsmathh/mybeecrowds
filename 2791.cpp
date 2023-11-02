#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int valor;
    for(int i=0; i<4; i++){
        cin >> n;
        if(n == 1) valor = i+1;
    }
     cout << valor << endl;

    return 0;
}
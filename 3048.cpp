#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n; cin >> n;
    vector<int> bin(n);
    int soma = 0;
    for(int i = 0; i < n; i++){
        cin >> bin[i];
    }
    for(int i = 0; i < n; i++){
        if(bin[i] != bin[i+1]) soma++;
    }

    cout << soma << endl;

    return 0;
}
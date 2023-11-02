#include <bits/stdc++.h>
using namespace std; 

int cont = 0;
int fib(int n){
    cont++;
    int resultado; 


    if(n == 0) return 0;
    if(n == 1) return 1;

    return resultado = fib(n-1) + fib(n-2);
    
}


int main(){
    int t; cin >> t;
    int v;

    for(int i = 0; i<t; i++){
        cin >> v;
        int r = fib(v);
        cout << "fib(" << v << ") = " << cont -1 << " calls = " << r << endl; 
        cont = 0;
    }
   
    return 0;
}
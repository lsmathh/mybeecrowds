#include <iostream> 


using namespace std;

int main(){
    int c,n,x;
    cin >> c >> n;
    int zero = 0;

    if(c > n){
            x = n*(c/n);
            x = c - x;
            cout << x << endl;
            
        
    }else{
        cout << c << endl;
    }

    return 0;
    
}
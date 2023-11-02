#include <iostream> 

using namespace std;

int main(){
    int x; cin >> x;
    int aux = x;

    for(int i = x-1; i > 0; i--){
        x = x*i;
    }

    cout << x << endl;

    return 0;
}




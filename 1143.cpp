#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int x; cin >> x;

    for(int i = 1; i <= x; i++){
        cout << i << " " << pow(i, 2) << " " << pow(i, 3) << endl;
    }
    return 0;
}
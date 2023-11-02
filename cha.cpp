#include <iostream> 
#include <vector>

using namespace std;

int main(){

    int cha; cin >> cha;
    vector<int> palpites(5);
    int quantidade = 0;

    for(int i = 0; i < 5; i++){
        cin >> palpites[i];
    }

    for(auto a : palpites){
        if(a == cha) quantidade++;
    }
    
    cout << quantidade << endl;
    return 0;
}
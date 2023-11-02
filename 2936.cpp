#include <iostream> 
#include <vector>
using namespace std;



int main(){
    vector<int> quantidades = {300, 1500, 600, 1000, 150};
    vector<int> x(5);
    int soma = 0;

    for(int i = 0; i < 5; i++){
        cin >> x[i];
        soma = soma + (x[i]*quantidades[i]);
    }

    cout << soma+225 << endl;


    return 0;
}
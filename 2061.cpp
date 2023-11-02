#include <iostream> 

using namespace std;

int main(){

    int n, m; 
    cin >> n >> m;
    string task;

    for(int i=0; i < m; i++){
        cin >> task;
        if(task == "fechou") n++;
        if(task == "clicou") n--;
    }

    cout << n << endl;

    return 0;
}
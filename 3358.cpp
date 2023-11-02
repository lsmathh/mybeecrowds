#include <iostream> 
#include <set>
#include <vector> 

using namespace std; 

void solve(){
    string nome; 
    set<char> vogais  = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int aux = 0, flag = 0;
    cin >> nome;

    for(int i=0; i<nome.size(); i++){
        if(vogais.count(nome[i])){
            aux = 0;
        }else{
            aux++;
            if(aux == 3) flag = 1;
        }
    }

    if(flag == 1) cout << nome << " nao eh facil" << endl;
    else{
        cout << nome << " eh facil" << endl;
    }
}



int main(){

    int n; cin >> n;
    
    while(n--){
        solve();
    }

    return 0;
}
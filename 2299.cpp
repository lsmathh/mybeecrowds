#include <iostream> 
#include <vector>
using namespace std;


int solve(int c, vector<int>& n, vector<int>& d){  
    int tam = n.size();  
    vector<int> dp(1+c, 0);
    
    for(int i = 0; i < tam; i++){
        for(int j = c; j >= n[i]; j--){
            dp[j] = max(dp[j], d[i] + dp[j-n[i]]);
        }
    }
    return dp[c];
}
int main(){

    int c, f, cont = 1;
    while(cin >> c >> f && (c || f)){
        vector<int> n(f), d(f);
        for(int i = 0; i < f; i++){
            cin >> n[i] >> d[i];
        }
        cout << "Teste " << cont++ << endl;
        cout << solve(c, n, d) << endl;  
    }

    return 0;
}
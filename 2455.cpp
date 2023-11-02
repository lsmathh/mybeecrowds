#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, c, pa, ca;
    
    cin >> p >> c >> pa >> ca;

    if(p*c == pa*ca) cout << 0 << endl;
    if(p*c > pa*ca) cout << -1 << endl;
    if(p*c < pa*ca) cout << 1 << endl;
    

    return 0;
    
}
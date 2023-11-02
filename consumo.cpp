#include <iostream> 

using namespace std;

int main(){

    int x;
    float gas;

    cin >> x;
    cin >> gas;

    double cons = x/gas;

    cout << fixed;
    cout.precision(3);
    
    cout << cons << " km/l" << endl;

    return 0;
}
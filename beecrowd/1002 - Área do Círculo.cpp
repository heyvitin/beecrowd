#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double a, raio;
    double n = 3.14159;
    
    cin >> raio;

    a =  (raio * raio) * n; 

    cout << "A=" << setprecision(4) << fixed << a << endl;

    return 0;
}
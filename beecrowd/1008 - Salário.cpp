#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int number, horas;
    double salary;

    cin >> number >> horas >> salary;

    salary = salary * horas;

    cout << "NUMBER = " << number << endl;
    cout << "SALARY = " << setprecision(2) << fixed << "U$ " << salary << endl;


    return 0;
}
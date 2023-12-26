#include <iostream>
using namespace std;
int main(void){
    double a, b;
    cin >> a >> b;
    cout.precision(10); // 이건 몰랐네
    cout << a / b << endl;
    return 0;
}
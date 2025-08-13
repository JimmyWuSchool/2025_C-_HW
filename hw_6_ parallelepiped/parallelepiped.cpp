#include <iostream>
#include <cmath>
using namespace std; 

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (4*(a*b+b*c+a*c))/sqrt(a*b*c);
}
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double a;
    double b;
    cin >> a;
    cin >> b;
    double c = sqrt(pow(a, 2)+ pow(b, 2));
    std::cout << std::fixed;
    std::cout << std::setprecision(6);
    std::cout << c;
    return 0;

}
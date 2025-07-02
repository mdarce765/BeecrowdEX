#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, c, atr, ac, at, aq, ar, pi=3.14159;
    cin>>a>>b>>c;
    atr = (a*c)/2;
    ac = pi * (c*c);
    at = ((a+b)*c)/2;
    aq = b*b;
    ar = a*b;
    
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", atr, ac, at, aq, ar);
    return 0;
}

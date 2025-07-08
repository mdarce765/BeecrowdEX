#include <iostream>

using namespace std;

int main(){
    int id, h;
    double sal, calc;
    
    cin>>id>>h>>sal;
    
    calc = h*sal;
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",id,calc);
}

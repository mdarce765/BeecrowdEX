#include <iostream>

using namespace std;

int main(){
    int x,a,m,d;
    
    cin>>x;
    
    a = x/365;
    m = (x%365)/30;
    d = (x%365)%30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,m,d);
    return 0;
}

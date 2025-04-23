#include <iostream>
#include <vector>

using namespace std;

int main(){
    int id, qtd;
    double p, calc;

    for(int i=0;i<2;i++){
        cin>>id>>qtd>>p;
        calc += qtd*p;
    }
     printf("VALOR A PAGAR: R$ %.2lf\n",calc);
}

#include <iostream>

using namespace std;

string nota(double n){
    string s;
    if(n>=7){
        s = "Aluno aprovado.";
    }else if(n<5){
        s = "Aluno reprovado.";
    }
    return s;
}

int main(){
    double  n1,n2,n3,n4,n5,m;
    string s;
    
    cin>>n1>>n2>>n3>>n4;
    
    m = ((n1*2)+(n2*3)+(n3*4)+(n4))/10;

    if(m>=5 && m<=6.9){
        printf("Aluno em exame.\n");
        cin>>n5;
        printf("Nota do exame: %.1lf\n",n5);
        m = (m+n5)/2;
        nota(m);
    }else{
        nota(m);
    }
    cout<<s<<endl;
    printf("Media: %.1lf\n",m);
}

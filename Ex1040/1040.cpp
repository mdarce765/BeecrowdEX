#include <iostream>

using namespace std;

int main(){
    double  n1,n2,n3,n4,n5,m;
    string s;
    
    cin>>n1>>n2>>n3>>n4;
    
    m = ((n1*2)+(n2*3)+(n3*4)+(n4))/10;
    
    printf("Media: %.1lf\n",m);
    if(m>=7){
        printf("Aluno aprovado.\n");
    }else if(m<5){
        printf("Aluno reprovado.\n");
    }
    if(m>=5 && m<=6.9){
        printf("Aluno em exame.\n");
        cin>>n5;
        printf("Nota do exame: %.1lf\n",n5);
        m = (m+n5)/2;
        if(m>=5){
            printf("Aluno aprovado.\n");
        }else if(m<5){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",m);
    }
}

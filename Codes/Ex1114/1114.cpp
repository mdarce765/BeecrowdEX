#include <iostream>

using namespace std;

int main(){
    string s;
    
    while(cin>>s){
        if(s == "2002"){
            break;
        }
        printf("Senha Invalida\n");
    }
    printf("Acesso Permitido\n");
    return 0;
}

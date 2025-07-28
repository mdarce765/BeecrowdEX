#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, c;
    vector<int> nm = {100,50,20,10,5,2,1};

    cin>>n;
    printf("%d\n",n);
    for(int i=0; i<nm.size(); i++){
        c = n/nm[i];
        n = n%nm[i];
        printf("%d nota(s) de R$ %d,00\n",c,nm[i]);
    }
    return 0;
}

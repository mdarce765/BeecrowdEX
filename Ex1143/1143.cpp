#include <iostream>

using namespace std;

int main() {
	int n;

	cin>>n;

	for(int i=1; i<n+1; i++) {
		printf("%d %d %d\n",i,i*i,i*i*i);
	}
	return 0;
}

#include <iostream>
using namespace std ;
int main(){
	int n,i,j;
	cout<<"enter number";
	cin>>n;
	int k=n;
	cout<<n;
	for(i=0;i<20;i++){
		
		for(j=1;j<10;j++){
			cout<<" "<<(n+=k);
		}
		cout<<"\n";
	}
}

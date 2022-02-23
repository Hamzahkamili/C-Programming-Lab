#include <iostream>
using namespace std;
int main(){
	int i, n;
do	{
unsigned long  fac=1;
	cout<<"Enter number"<<endl;
	cin>>n;
	for(i=n;i>0;i--){
		fac=fac*i;
	}
	cout<<fac<<endl;
}while(n!=0);
}

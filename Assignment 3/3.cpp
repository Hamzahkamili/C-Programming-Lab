#include <iostream>
using namespace std;
int zeroSmaller(int a,int b)
int zeroSmaller(int a,int b){
	if(a<b || b<a)
	return 0;
	
	
}
int main(){
	cout<<"Enter two numbers"<<endl;
	int a,b;
	cin>>a>>b;
	zeroSmaller(&a,&b);
	cout<<zeroSmaller();
}

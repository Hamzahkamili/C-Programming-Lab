#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Press 1 if F to C"<<endl<<"Press 2 if C to F"<<endl;
	cin>>n;
	if(n==1){
		cout<<"ENter F"<<endl;
		float f;
		cin>>f;
		float c= (f-32)/1.8000;
		cout<<c;
	}
	else{
			cout<<"ENter c"<<endl;
		float c;
		cin>>c;
		float f= c*1.8000 + 32.00;
		cout<<f;
	}
	
}

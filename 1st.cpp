#include <iostream>
using namespace std;
int main(){
	int n, i,  a[100];
	float avg=0;
	cout<<"enter size"<<endl;
	cin>>n;
	cout<<"enter numbers"<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int small=a[0];
	int large=a[0];
	for(i=0;i<n;i++){
		if(small>a[i]){
			small=a[i];
		}
	}
	cout<<small<<" is smallest number"<<endl;
	for(i=0;i<n;i++){
		if(large<a[i]){
			large=a[i];
		}
	}
	cout<<large<<" is largest  number"<<endl;
	for(i=0;i<n;i++){
		avg=avg+a[i];
		
	}
	avg= avg/n;
	cout<<"average is"<<avg<<endl;
	
}

#include <iostream>
using namespace std;
float carea(float r);
int main(){
	cout<<"Enter radius"<<endl;
	float r;
	cin>>r;
	carea(r);
	cout<<"area is "<<carea(r);
}
float carea(float r){
	float a;
return	3.14*r*r;
}

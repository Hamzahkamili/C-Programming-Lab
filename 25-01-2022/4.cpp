#include <iostream>
using namespace std;
int main(){
	float x,y;
	cout<<"Enter x coordinate"<<endl;
	cin>>x;
	cout<<"Enter y coordinate"<<endl;
	cin>>y;
	if(x>0 && y>0)
	cout<<"1st Quad";
	else if(x<0 && y>0)
	cout<<"2nd Quad";
	else if(x<0 && y<0)
	cout<<"3rd Quad";
	else if(x>0 && y<0)
	cout<<"4th Quad";
	else if (x==0 && y>0 || y<0)
	cout<<"Its on y axis";
	else if(y==0 && x>0 || x<0)
	cout<<"Its on x axis";
	else 
	cout<<"Its on origin";
	
}

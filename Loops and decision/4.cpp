#include <iostream>
using namespace std;
int main(){
	double a,c,ans;
	char o,ch;
do{
	cout<<"Enter first num, operator, 2nd numb"<<endl;
	cin>>a>>o>>c;
	switch(o){
	
	case '+' :
		ans=a+c;
		break;
		case '-' :
		ans=a-c;
		break;
		case '*' :
		ans=a*c;
		break;
		case '/' :
		ans=a/c;
		break;
		
		
		
}
cout<<ans<<endl;
cout<<"y for con. n for no"<<endl;
cin>>ch;
}while(ch=='y');



 
}

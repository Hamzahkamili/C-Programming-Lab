#include <iostream>
using namespace std;
int main(){
	float n;
	int m;
	cout<<"Enter Total purchases"<<endl;
	cin>>n;
	cout<<"press 1 if you are a teacher else press 2"<<endl;
	cin>>m;
	if(m==1){
		if(n>=100){
			float d;
			d=0.12*n;
			float dt;
			dt=n-d;
			float st;
			st=0.05*n;
			float t;
			t=dt+st;
			cout<<"Total purcheses = "<<n<<endl<<"Teachers discount (12%) = "<<d<<endl<<"Discounted Total = "<<dt<<endl<<"sales tax(5%) = "<<st<<endl<<"Total = "<<t<<endl;
		}
		else{
				float d;
			d=0.10*n;
			float dt;
			dt=n-d;
			float st;
			st=0.05*n;
			float t;
			t=dt+st;
			cout<<"Total purcheses = "<<n<<endl<<"Teachers discount (10%) = "<<d<<endl<<"Discounted Total = "<<dt<<endl<<"sales tax(5%) = "<<st<<endl<<"Total = "<<t<<endl;
		}
	}
	else if(m==2){
		float d;
			
			float st;
			st=0.05*n;
			float t;
			t=n+st;
			cout<<"Total purcheses = "<<n<<endl<<"sales tax(5%) = "<<st<<endl<<"Total = "<<t<<endl;
		}
	
}

#include <iostream>
using namespace std;

int main(){
    double n;
    cout<<"Enter Ricter Scale Reading"<<endl;
    cin>>n;

    if(n >= 7.5)
        cout<<"Catastrophe: most buildings destroyed"<<endl;
    else if(n >= 6.5 && n < 7.5)
        cout<<"Disaster: houses and buildings may collapse"<<endl;
    else if(n >= 5.5 && n < 6.5)
        cout<<"Serious damage: walls may crack or fall"<<endl;
    else if(n >= 5.0 && n < 5.5)
        cout<<"Some damage"<<endl;
    else
        cout<<"Litter or No Damage"<<endl;

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float p;
    cout<<"Enter the Principal amount : ";
    cin>>p;

    float r;
    cout<<"Enter the Rate of interest : ";
    cin>>r;

    float t;
    cout<<"Enter the Time yrs: ";
    cin>>t;

    float si =  p * r * t /100.0;
    float ci = p*pow(1+(r/100.0),t);

    cout<<"Your Simple Interest amount is : "<<si+p<<endl;
    cout<<"Your COmpund Interest amount is : "<<ci<<endl;



    return 0;
}
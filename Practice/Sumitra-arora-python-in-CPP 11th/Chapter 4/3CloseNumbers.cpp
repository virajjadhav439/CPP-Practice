#include <iostream>
using namespace std ; 

int main(){
    float a,b;

    cout<<"Enter the Value for First number : ";
    cin>>a;

    cout<<"Enter the Value for Second number : ";
    cin>>b;

    if ((a-b<=0.001) && (b-a<=0.001))
    {
        cout<<"Close";
    }
    else{
        cout<<"Not Close";
    }
    
}
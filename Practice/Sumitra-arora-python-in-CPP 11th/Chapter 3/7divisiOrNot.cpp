#include <iostream>
using namespace std ; 
int main(){
    int x,y;
    cout << "Enter the First number : ";
    cin>>x;

    cout << "Enter the second number : ";
    cin>>y;

    if (x%y==0)
    {
        cout<<"It is Fully Divisible";
    }
    else{
        cout <<"It is Not FUlly Divisible";
    }
    
    return 0 ;
}
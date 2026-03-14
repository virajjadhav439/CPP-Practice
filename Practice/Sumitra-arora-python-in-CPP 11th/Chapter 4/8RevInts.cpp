#include <iostream>
using namespace std ; 

int main(){
    int n ;
    cout<<"Odds upto what n : ";
    cin>>n;
    for(int i=n-1;i>-1;i--)
    {
        if (i%2!=0)
        {
            cout<< i <<endl;
        }
    };
    return 0;
}
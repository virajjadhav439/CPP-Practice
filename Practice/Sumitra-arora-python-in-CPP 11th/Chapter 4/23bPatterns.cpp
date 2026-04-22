#include <iostream>
using namespace std;

int main(){
    float x = 0;
    cout<<"Enter the value of X : ";
    cin>>x;

    for (int i = 0; i < x; i++)
    {
        // Stars
        for (size_t j = 0; j < i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for (int i = x-2; i>-1; i--)
    {
        // Stars
        for (size_t j = 0; j < i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0 ;
}
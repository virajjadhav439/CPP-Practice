#include <iostream>
using namespace std;

int main(){
    float x = 0;
    cout<<"Enter the value of X : ";
    cin>>x;

    for (int i = 0; i < x; i++)
    {
        // Stars
        for (size_t j = 0; j < i*2+1; j++)
        {
            if (j==0|| j==i*2)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
            
        }
        cout<<endl;
    }

    for (int i = x-2; i>-1; i--)
    {
        // Stars
        for (size_t j = 0; j < i*2+1; j++)
        {
            if (j==0|| j==i*2)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0 ;
}
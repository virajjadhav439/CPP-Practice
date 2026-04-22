#include <iostream>
using namespace std;

int main(){
    float x = 0;
    cout<<"Enter the value of X : ";
    cin>>x;

    for (int i = 0; i < x; i++)
    {
        // Spaces
        for (size_t j = 0; j < x-i-1; j++)
        {   
            cout<<" ";
        }
        // Stars
        for (size_t j = 0; j < i*2+1; j+=2)
        {
            if (j==0 || j==i*2)
            {
                cout<<"* ";
            }
            else{
    cout<<"  ";
            }
            
        }
        cout<<endl;
    }

    for (int i = x-2; i>-1; i--)
    {
        // Spaces
        for (size_t j = 0; j < x-i-1; j++)
        {   
            cout<<" ";
        }
        // Stars
        for (size_t j = 0; j < i*2+1; j+=2)
        {
            if (j==0 || j==i*2)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
    
    return 0 ;
}
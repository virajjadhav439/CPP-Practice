#include <iostream>
using namespace std; 

int main(){
    float x = 0;
    cout<<"Enter the value of X : ";
    cin>>x;
    int ascii = 65;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i+1; j++)
        {

            cout<<(char)(ascii+j)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter the value for n : ";
    cin>>n;
    int m ;
    cout << "Enter the value for m : ";
    cin>>m;

    for (int i = 1; i < n; i++)
    {
        if (i%m==0)
        {
            if (i%2==0)
            {
                cout<< i << " even "<< endl;
            }
            else{
                cout<< i << " odd "<< endl;
            }
            
        }
        
    }
    
    
    return 0 ;
}
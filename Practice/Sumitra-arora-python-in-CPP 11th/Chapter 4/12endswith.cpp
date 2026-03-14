#include <iostream>
using namespace std; 
int main(){
    int num ; 
    cout <<"Enter the Number you want to check : ";
    cin >> num;
    
    if (num%10==4)
    {
        cout<<"ends with 4";
    }
    else if (num%10==8)
    {
        cout<<"ends with 8";
    }
    else{
        cout<<"end with Neither";
    }
    return 0;
}
#include <iostream>
using namespace std ; 
int main(){
    long long int num;
    int x;
    long long int rev_num=0;
    cout<<"Enter the Number to Reverse : ";
    cin>>num;

    while (true)
    {if (num!=0)
    {
        
        x = num%10;
        rev_num = rev_num*10 + x;
        cout<<rev_num<<endl;
        num = num/10;
    }
    else{
        break;
    }
        
    }
    cout<<"--------------------"<<endl;
    cout<<rev_num<<endl;
    return 0;
}
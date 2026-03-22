#include <iostream>
using namespace std; 
// Store problem 
int main(){
    int item_num;
    cout<<"Enter the Number of Items : ";
    cin>>item_num;

    if(item_num<10){
        //per item charge 120
        cout<<"Your Amount Payable is : "<<item_num*120;
    }
    else if (item_num>=10 && item_num<100)
    {
        //per item charge 100
        cout<<"Your Amount Payable is : "<<item_num*100;
    }
    else{
        cout<<"Your Amount Payable is : "<<item_num*70;
    }
    
    return 0 ;
}
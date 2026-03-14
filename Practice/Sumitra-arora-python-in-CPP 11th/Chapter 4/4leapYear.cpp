#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"enter the year you want to check : ";
    cin>>year;

    int rem1 = year % 4;
    int rem2 = year % 100;
    int rem3 = year % 400;

    if(rem1 == 0){
        if (rem2==0 && rem3!=0)
        {
            cout<<"Not Leap Year";
        }
        else{
            cout<<"Leap Year";
        }
        
    }else{
        cout<<"Not Leap Year";
    }
return 0 ;
}
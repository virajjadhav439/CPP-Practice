#include <iostream>
using namespace std ;
int main(){
    int year;
    cout<<"Enter the Year: ";
    cin>>year;
    if(year%4==0){
        cout<<"It is a Leap Year";
    }
    else{
        if((year%100 == 0)&& (year!=0))
        {cout<<"It is a Leap Year";}
        else{
            cout<<"It is Not a leap year";
        }
    }
    return 0 ;
}
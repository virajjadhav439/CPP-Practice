#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter How many employees you want :";
    cin>>n;
    int age26to35=0 ;
    int age36to45=0 ;
    int age46to55=0 ;
    for(int i=0;i<n;i++){
        int age;
        cout<<"Enter The age of Employee "<<i<<" : ";
        cin>>age;
        
        if (26<=age && age<=35)
        {
            age26to35++;
        }
        else if (36<=age && age<=45)
        {
            age36to45++;
        }
        else if (46<=age && age<=55)
        {
            age46to55++;
        }
        
        
    }
    cout<<"Employees with age 26 to 35 : "<<age26to35<<endl;
    cout<<"Employees with age 36 to 45 : "<<age36to45<<endl;
    cout<<"Employees with age 46 to 55 : "<<age46to55<<endl;
}
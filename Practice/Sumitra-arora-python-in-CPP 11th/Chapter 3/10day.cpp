// Write a program to take two inputs for day,month and then calculate which day of the year, 
// the given date is.For simplicty, take 30 days for allmon
#include <iostream>
using namespace std ; 
int main(){
    string day,month;
    cout <<"Enter the Day : ";
    cin>>day;
    cout << "Enter the Month : ";
    cin>>month;
    cout<<"Day of the Year is : " <<  (stoi(month.substr(5,1))-1)*30 +stoi(day.substr(3,1));
    return 0 ; 

}
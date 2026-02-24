// Write a program to read today's date (only del part) from user. Then display how many days are left in
// the current month.
#include <iostream>
#include <string>
using namespace std;

int main(){
    int month_days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    string date;
    cout<<"Enter the Today's Date(DD-MM-YYYY):";
    cin>>date;
    // day
    int day = stoi(date.substr(0,2));
    // month 
    int month = stoi(date.substr(3,2));
    cout<<"Number of days Left in The month are : "<<month_days[month-1]-day;
    return 0;
}
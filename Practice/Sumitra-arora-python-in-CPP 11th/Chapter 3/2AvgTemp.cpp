#include <iostream>
using namespace std;
int main(){
    int Monday;
    cout<<"What is the Temperature on Monday: ";
    cin>>Monday;
    int Tuesday;
    cout<<"What is the Temperature on Tuesday: ";
    cin>>Tuesday;
    int Wednesday;
    cout<<"What is the Temperature on Wednesday: ";
    cin>>Wednesday;
    int Thursday;
    cout<<"What is the Temperature on Thursday: ";
    cin>>Thursday;
    int Friday;
    cout<<"What is the Temperature on Friday: ";
    cin>>Friday;
    int Saturday;
    cout<<"What is the Temperature on Saturday: ";
    cin>>Saturday;
    int Sunday;
    cout<<"What is the Temperature on Sunday: ";
    cin>>Sunday;

    cout<<"The Average Temperature of the Week is : "<<(Monday+Tuesday+Wednesday+Thursday+Friday+Saturday+Sunday)/7.0;

    return 0 ;
}
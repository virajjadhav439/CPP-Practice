// Write program to input a number and print its first five multiples. a 
// program to read details like name,class, age of a student and then print the details firstly in same
// line and then in separate lines.
// Make sure to have two blank lines in these two different types of prints.

#include <iostream>
using namespace std ; 

int main(){
    string name;
    cout<<"Enter your name : ";
    cin>>name;
    string classs;
    cout<<"Enter your class : ";
    cin>>classs;
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    cout<<name<<" ";
    cout<<classs<<" ";
    cout<<age<<" ";
    cout<<endl;
    cout<<endl;
    cout<<name<<endl;
    cout<<classs<<endl;
    cout<<age<<endl;
}
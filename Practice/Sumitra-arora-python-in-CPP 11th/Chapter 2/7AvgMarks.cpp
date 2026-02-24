// Write Python program that accepts marks in 5 subjects and outputs average marks.
#include <iostream>
using namespace std ;

int main (){
    int sum_of_marks = 0;
    int marks;
    cout<<"Enter the Marks of subject A : ";
    cin >> marks;
    sum_of_marks+=marks;
    cout<<"Enter the Marks of subject B : ";
    cin >> marks;
    sum_of_marks+=marks;
    cout<<"Enter the Marks of subject C : ";
    cin >> marks;
    sum_of_marks+=marks;
    cout<<"Enter the Marks of subject D : ";
    cin >> marks;
    sum_of_marks+=marks;
    cout<<"Enter the Marks of subject E : ";
    cin >> marks;
    sum_of_marks+=marks;

    // Average
    int avg = sum_of_marks/5;
    cout<<"Your Average marks is : "<<avg;

    

    return 0;
}
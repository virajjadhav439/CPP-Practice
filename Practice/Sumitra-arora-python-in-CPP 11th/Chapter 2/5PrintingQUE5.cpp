// Write the program with maximum three lines of code and that assigns first 5 multiples of a number to 5
// variables and then print them.

#include <iostream>
using namespace std;

int main(){
    int number ; 
    cout << "Enter a Number : ";
    cin>>number;

    int multiple1 = number*1;
    int multiple2 = number*2;
    int multiple3 = number*3;
    int multiple4 = number*4;
    int multiple5 = number*5;

    cout<<"First 5 multiples are : ";
    cout << "multiple1 " << multiple1<<endl;
    cout << "multiple2 " << multiple2<<endl;
    cout << "multiple3 " << multiple3<<endl;
    cout << "multiple4 " << multiple4<<endl;
    cout << "multiple5 " << multiple5<<endl;

    return 0;
}
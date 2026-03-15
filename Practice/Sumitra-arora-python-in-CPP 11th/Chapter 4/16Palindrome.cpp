#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number to check palindrome : ";
    cin>>num;

    int rev_num = 0;
    int temp_num = num;

    while (temp_num)
    {
        rev_num = rev_num * 10 + (temp_num % 10);
        temp_num = temp_num / 10;
    }

    cout<<"Reverse number : "<<rev_num<<endl;

    if(num == rev_num)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";

    return 0;
}
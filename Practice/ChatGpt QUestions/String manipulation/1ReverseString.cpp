// Reverse a string (without using built-in reverse)
#include <iostream>
using namespace std;

int main(){
    string txt = "Hello World!";
    for (int i = txt.length(); i >= 0; i--)
    {
        cout<<txt[i];
    }
    
    return 0 ;
}
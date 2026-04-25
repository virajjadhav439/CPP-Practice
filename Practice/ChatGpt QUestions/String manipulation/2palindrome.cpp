// Check if a string is palindrome
#include <iostream>
using namespace std;

int main(){
    string txt = "aabaa";
    string rev_txt = "";
    for (int i = txt.length() - 1; i >= 0; i--)
    {
        rev_txt+=txt[i];
    }
    if (txt==rev_txt)
    {
        cout<<"It is palindrome"<<endl;
    }
    else{
        cout<<"It is not palindrome"<<endl;

    }
    
    return 0 ;
}
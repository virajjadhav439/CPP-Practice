// Completed it fucnikign yesss 
// ✅☑️✅☑️✅☑️✅☑️✅☑️☑️✅✅
#include <iostream>
#include <string>

using namespace std;
int main(){
    string Roman = "III";
    int len = Roman.length();
    int value = 0;
    int prev_value = 0;
    char roman_char;
    int total = 0;

    for(int i = len-1; i >=0; i--)
    {
        roman_char =Roman[i];
        switch(roman_char)
        {
        case 'I':
            value = 1; 
            break;
        case 'V':
            value = 5; 
            break;  
        case 'X':
            value = 10; 
            break;  
        case 'L':
            value = 50; 
            break;  
        case 'C':
            value = 100; 
            break;  
        case 'D':
            value = 500; 
            break;  
        case 'M':
            value = 1000; 
            break;
        }
        //comparision
    if (!(value<prev_value))
    {
        total+=value;
    }
    else{
        total+=value*-1;
    }
    prev_value=value;
    }
    cout<<"The Total Roman number is : "<<total<<endl;
    return 0;
}
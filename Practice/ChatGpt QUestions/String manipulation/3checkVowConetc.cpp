// Count vowels, consonants, digits, spaces
#include <iostream>
using namespace std;

int main(){
    string txt = "Congra";
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;

    for (int i = 0; i < txt.length(); i++)
    {
        char chr = tolower(txt[i]);
        if (chr == 'a'||chr == 'e'||chr == 'i'||chr == 'o'||chr == 'u')
        {
            vowels++;
        }
        else if(isalpha(chr)){ 
            consonants++;
        }
        else if(isdigit(chr)){ 
            digits++;
        }
        else if(isspace(chr)){ 
            spaces++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;
    return 0 ;
}
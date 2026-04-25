// Remove all spaces from string
#include <iostream>
using namespace std;

int main(){
    string txt = "CoN grA";
    string no_space_txt = "";

    for (int i = 0; i < txt.length(); i++)
    {
        if (txt[i]!=(' '))
        {
            no_space_txt+=txt[i];
        }
    }   
    cout<<no_space_txt<<endl;
    return 0 ;
}
// Convert lowercase to uppercase and vice versa
#include <iostream>
using namespace std;

int main(){
    string txt = "CoNgrA";
    string opp_txt = "";

    for (int i = 0; i < txt.length(); i++)
    {
        if (islower(txt[i]))
        {
            opp_txt+=toupper(txt[i]);
        }
        else if (isupper(txt[i]))
        {
            opp_txt+=tolower(txt[i]);
        }
        
    }
    cout<<opp_txt<<endl;
    return 0 ;
}
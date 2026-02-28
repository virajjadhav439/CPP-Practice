#include <iostream>
using namespace std;
int main(){
    int hour;
    cout<<"Enter Hour Between 1-12 : ";
    cin>>hour;
    int ahead;
    cout<<"how many Hours ahead : ";
    cin>>ahead;
    cout<<"Time It would be : "<<(hour+ahead)%12 << " o'Clock";

    return 0;
}
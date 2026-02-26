#include <iostream>
using namespace std;

int main(){
    float amount,roi,time;
    cout<<"Enter the Principle amount:";
    cin>>amount;
    cout<<"Enter the return on investment:";
    cin>>roi;
    cout<<"Enter the time:";
    cin>>time;

    float si = amount*roi*time/100.0;

    cout<<"Your Simple Interest is"<<si;
    cout<<"Your total amount payable is "<<si+amount;

    return 0;
}
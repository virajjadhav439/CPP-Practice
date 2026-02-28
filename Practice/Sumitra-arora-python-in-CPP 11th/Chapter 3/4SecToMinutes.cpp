#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int sec;
    cout <<"Enter the number of seconds : ";
    cin>>sec;
    // convert sec to minute divide by 60 
    int min  = floor(sec/60.0);
    cout<< min<<" minutes "<<sec%60 << " seconds ";
    return 0;
}
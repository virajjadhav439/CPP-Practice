#include <iostream>
using namespace std;
int main(){
    int n;
    int formed_num;
    cout<<"Enter a number between 1-7 : ";
    cin>>n;

    // preaperation of num 
    formed_num = n*100 + (n+1)*10 + (n+2);
    cout<<"The Number formed is "<<formed_num;

}
#include <iostream>

using namespace std ;
int main(){
    int x;
    cout << "Enter the number to Reverse : ";
    cin>>x;
    // 123
    cout << "The number reversed is : "<< (x%10)*100 + ((x%100 - (x%10))/10)*10 + ((x - (x%100))/100)*1;
    return 0 ;
}
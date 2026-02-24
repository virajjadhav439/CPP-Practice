// program to input a number and print its first five multiples.
#include <iostream>
using namespace std;
int main(){
    int n =5;
    cout << "Enter A number for its 5 multiple : ";
    cin>>n;
    for(int i =1 ; i<6;i++){
        cout<<n<<" X "<<i<<" = "<< n*i<<endl;
    }
    return 0;
}
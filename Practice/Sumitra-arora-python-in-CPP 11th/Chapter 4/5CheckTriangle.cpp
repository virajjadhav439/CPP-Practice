#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the Value for Side A of Triangle : ";
    cin>>a;

    int b;
    cout<<"Enter the Value for Side B of Triangle : ";
    cin>>b;

    int c;
    cout<<"Enter the Value for Side C of Triangle : ";
    cin>>c;

    if ((a+b>c)&&(a+b>c)&&(a+b>c))
    {
        cout<<"The Triangle iS possible";
    }
    else{
        cout<<"The Triangle iS Not possible";
    }
    
    return 0;
}
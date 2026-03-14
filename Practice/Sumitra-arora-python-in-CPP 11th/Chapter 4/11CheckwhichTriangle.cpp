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

    if (a==b)
    {
        if (b==c)
        {
            cout<<"It is a Equilateral Triangle";
        }
        else{
            cout << "It is a isosceles Triangle";
        }
    }
    else if (b==c)
    {
        if (a==b)
        {
            cout<<"It is a Equilateral Triangle";
        }
        else{
            cout << "It is a isosceles Triangle";
        }
    }
    else{
        cout <<"It is a Scalene Triangle";
    }
    

    return 0;
}
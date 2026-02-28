//4  Write a program to obtain x, y,z from user and calculate expression: 4x+3y +9z+6.
#include <iostream>
#include <cmath>
using namespace std;
float const pi=22/7.0;
float expression_calculation(float x,float y,float z){

    return 4*pow(x,4)+3*pow(y,3)+9*z+6*pi;
}
int main(){
    float x,y,z;
    cout<<"Enter the Value for x :";
    cin>>x;
    cout<<"Enter the Value for y :";
    cin>>y;
    cout<<"Enter the Value for z :";
    cin>>z;
    cout<<expression_calculation(x,y,z);
    return 0;
}
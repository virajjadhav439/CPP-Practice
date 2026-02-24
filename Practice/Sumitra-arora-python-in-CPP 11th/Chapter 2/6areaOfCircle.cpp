// Write a Python program that accepts radius of a circle and prints its area.
#include <iostream>
using namespace std ;
int main(){
    const float pi = 22.0/7;
    float radius;
    cout<<"Enter the Radius of the circle : ";
    cin>>radius;
    float area = pi*radius*radius;
    cout<<"The Area of the Circle with radius "<<(float)radius<<" is "<<area;
    return 0;
}
// write a program to find area of a triangle.
#include <iostream>
using namespace std;
int main(){
    int base;
    cout<<"enter the length Base : ";
    cin>>base;

    int height;
    cout<<"enter the length height : ";
    cin>>height;

    // area
    float area = 1/2.0 * base * height;
    cout<<"The Area of the Triangle is : "<< area;
}
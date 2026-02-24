// program that asks for your height in centimetres and then converts your height to feet
// 1 foot = 12 inch , 1 inch = 2.54 cm
#include <iostream>
using namespace std;

int main(){
    int cm_height;
    cout<<"Enter your Height in Cms : ";
    cin>>cm_height;
    float inch_height = cm_height/2.54;
    cout<<"Your Height in Feet is "<<(int)inch_height/12<<" Feet "<< (int)inch_height%12 << " Inch ";
    return 0;
}

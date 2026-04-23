#include <iostream>
using namespace std;

int main() {
    float temp;
    int type;
    float F=0,C=0;

    cout << "Enter the Value for Temperature: ";
    cin >> temp;

    cout << "Enter the Unit it is in 1.Clesuis 2.Farenheit your ans: ";
    cin >> type;

    if (type ==1)
    {
        F = 9/(5*temp);
        cout<<"Temperature in Cesuis :"<<temp<<endl;
        cout<<"Temperature in Farenheit :"<<F<<endl;
    }
    else if (type ==2)
    {
        C = (5/9)*(temp-32);
        cout<<"Temperature in Cesuis :"<<temp<<endl;
        cout<<"Temperature in Farenheit :"<<C<<endl;
    }
    

    return 0;
}
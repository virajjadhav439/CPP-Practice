#include <iostream>
using namespace std ;
int main(){
    int N;
    cout << "enter a Number N>20 : ";
    cin>> N;

    for (int i = 11; i < N; i++)
    {
        if (i%3==0)
        {
            cout<<"Tipsy"<<endl;
        }
        else if(i%7==0){
            cout<<"Topsy"<<endl;
        }
        if (i%3==0 && i%7==0)
        {
            cout<<"TipsyTopsy"<<endl;
        }
        
    }
    
}
#include <iostream>
using namespace std;
int main(){
    //a part
    float a=2.0,b=9.0,sum=0;
    for (int i = 0; i < 7; i++)
    {
        if (i%2==0)
        {
            sum+=((a+(i*3))/((b+(i*4))));
        }
        else{
            sum+=((a+(i*3))/((b+(i*4))))*-1;
        }
        
    }
    cout<<"The Sum of the digits is: "<<sum<<endl;
    
    int n;
    cout<<"Enter A Number for n:";
    cin>>n;
    sum=0;
    int num;
    //b part
    for (int i = 0; i < n; i++)
    {
        num = ((i*2)+1);
        sum+= num*num;
    }
    cout<<"The Sum of the digits is: "<<sum<<endl;
    
    return 0;
}
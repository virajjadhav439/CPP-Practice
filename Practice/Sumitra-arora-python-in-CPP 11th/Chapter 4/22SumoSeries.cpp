#include <iostream>
using namespace std;

float factorial(float num){
    if (num>0)
    {
        return num*factorial(num-1);
    }
    else{
        return 1;
    }
    
}
float nthpower(float x,float pow){
    if (pow>0)
    {
        return x*nthpower(x,pow-1);
    }else{
        return 1;
    }
    
}
int main(){
    float x = 0;
    cout<<"ENter the value of X : ";
    cin>>x;

cout<<endl;
    float sum = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (i%2==0)
        {
            sum-=nthpower(x,i)/factorial(i);
        }
        else{
            sum+=nthpower(x,i)/factorial(i);
        }
        
    }
    cout<<"THe TOtal sum is : " << sum;

    return 0 ;
}
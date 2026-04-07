#include <iostream>
using namespace std;
int main(){
    int x = 49;
    int left=0,right=x,mid=0,ans=0;
    while (left<=right)
    {
        cout<<"============"<<endl;
        cout<<"left: "<<left<<endl;
        cout<<"right: "<<right<<endl;
        mid=(left+right)/2;
        cout<<"mid: "<<mid<<endl;
        
        if (mid*mid==x)
        {
            cout<<"true"<<endl;
            ans = mid;
            break;
        }
        else if (mid*mid > x)
        {
            right = mid - 1;
        }
        else{
            ans = mid;
            left = mid + 1;
        }
    }
    cout<<"============"<<endl;
    cout<<ans<<endl;
    
    
}
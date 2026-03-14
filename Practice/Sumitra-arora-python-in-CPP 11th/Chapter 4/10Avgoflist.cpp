#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter the Size of the Array : ";
    cin >> n ; 
    int summ = 0;
    

    int arr[n];
    cout<<"enter Elements  : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        summ += arr[i];
    }

    float avg = summ/n;
    cout<< "The Average of the List of Numbers  is : "<<avg<<endl;
    
    

    return 0 ;
}
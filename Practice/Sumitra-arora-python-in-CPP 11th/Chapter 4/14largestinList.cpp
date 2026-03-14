#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter the Size of the Array : ";
    cin >> n ; 
    int largest = 0;
    

    int arr[n];
    cout<<"enter Elements  : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        if (largest<arr[i])
        {
            largest=arr[i];
        }
        ;
    }
    cout <<"THe largesrt in the list is : "<< largest;
    return 0;
}
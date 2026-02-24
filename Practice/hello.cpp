#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s,int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword=sp;
    }

    void printDetails()
    {
        cout << "The Name of Our First Employee is " << this->name << " and his salry is " << this->salary << " Dollars " << endl;
    }
    void  getSecretPassword(){
        cout<<"the secret password of the employee is "<<this->secretPassword; 
    }

private:
    int secretPassword;
};

class Programmer : public Employee
{
    public:
    int errors;
};

int main()
{
    // cout<<"Hello World"<<endl;
    // cout<<"This is the Next line"<<endl;
    // int a,b,c;
    // short sa=9;
    // cout<<sa;

    // CamelCase Notations
    // int marksInMaths=83;
    // cout<<"The marks of the student in maths is "<<marksInMaths;
    // return 0;

    // short a;
    // int b;
    // long c;
    // long long d;
    // float f=67.67;
    // cout<<"The score is "<<f;

    // user input
    // int a,b;
    // cout<<"Enter the First Number: "<<endl;
    // cin>>a;
    // cout<<"Enter the Second Number: "<<endl;
    // cin>>b;
    // cout<<"The Sum IS "<<a+b;

    // Operators
    // float a,b;
    // cout<<"Enter the First Number"<<endl;
    // cin>>a;
    // cout<<"Enter the Second Number"<<endl;
    // cin>>b;

    // cout<<"a + b = "<<a+b<<endl;
    // cout<<"a - b = "<<a-b<<endl;
    // cout<<"a * b = "<<a*b<<endl;
    // cout<<"a / b = "<<a/b<<endl;

    // IF - Else COndition
    // int age;
    // cout<<"Enter Your Age: "<<endl;
    // cin>>age;
    // if (age>=18){
    //     cout<<"You are eligible to vote"<<endl;
    // }
    // else if(age>=150 || age<1){
    //     cout<<"Invalid Age"<<endl;
    // }
    // else{
    //     cout<<"You Are Not eligible to vote"<<endl;
    // }

    // Switch case
    // int age;
    // cout << "Enter your Age : ";
    // cin >> age;

    // switch (age)
    // {
    // case 12:
    //     cout << "You are 12 Years old";
    //     break;
    // case 15:
    //     cout << "you are 15 years old";
    //     break;
    // default:
    //     cout << "You are neither 12 nor 15 yrs old";
    //     break;
    // }

    // Loops
    // int index =0;
    // while(index<34){
    //     cout<<"You are index Number "<<index<<endl;
    //     index++;
    // }
    // do while
    // int index=0;
    // do
    // {
    //     cout << "You are index Number " << index << endl;
    // }
    // while(index==0);

    // for loop
    // for (int i = 0; i < 5; i++)
    // {
    //     /* code */
    // }
    // for (int j = /* length */ - 1; j >= 0; j--)
    // {
    //     /* code */
    // }
    // for (auto &&i : container)
    // {

    // }

    // int a,b;
    // cout<<"Enter the First Number: "<<endl;
    // cin>>a;
    // cout<<"Enter the Second Number: "<<endl;
    // cin>>b;
    // cout<<"The Function Returned "<<add(a,b);

    // int arr[34]={1,2,3,4,5,6,7,8,9};
    // cout<<arr[0]<<endl;

    // for(int i =0;i<34;i++){
    //     cout<<arr[i]<<" ";
    // }

    // int marks[5];

    // for(int i=0;i<5;i++){
    //     cin>>marks[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<marks[i]<<" ";
    // }

    // int arr2d[4][3]={
    //     {1,2,3},
    //     {4,5,6}
    // };

    // for(int i = 0; i<4;i++){
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"The Value at "<<i<<", "<<j<<" is "<<arr2d[i][j]<<endl;
    //     }

    // }

    // int a = 343;
    // float b =57;

    // cout<<(float) a/34 <<endl;

    // cout<<(int) b;

    // string name = "Bthisipan";
    // for (int i = 0; i < 150; i++)
    // {
    //     cout<<name[i]<<endl;
    // }
    // cout<<name.length()<<endl;
    // cout<<name.substr(0,3)<<endl;

    // int a = 34;
    // int* ptra;
    // ptra = &a;
    // cout<<"the Vlaue of a is "<<a<<endl;
    // cout<<"the Vlaue of a is "<<*ptra<<endl;
    // cout<<"the Address of a is "<<ptra<<endl;
    // cout<<"the Address of a is "<<&a<<endl;

    Employee har("Viraj Constructor", 334,377823);
    // har.name= "Viraj";
    // har.salary = 100000;
    har.printDetails();
    har.getSecretPassword();

    
    return 0;
}
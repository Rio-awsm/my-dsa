#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<endl;

    cout<<"enter the numbers  "<<endl;
    cin>>a;
    cin>>b;

    cout<<endl;

    cout<<"Enter the opereation--> 1.Sum; 2.Subtraction; 3.Multiplication; 4.Division"<<endl;
    int operation;
    cin>>operation;

    switch(operation){
        case 1: cout<<"the value of "<<a<<"+"<<b<<"is "<<a+b<<endl;
        break;

        case 2: cout<<"the value of "<<a<<"-"<<b<<"is "<<a-b<<endl;
        break;

        case 3:cout<<"the value of "<<a<<"*"<<b<<"is "<<a*b<<endl;
        break;

        case 4:cout<<"the value of "<<a<<"/"<<b<<"is "<<a/b<<endl;
        break;
    }
    cout<<endl;
return 0;
    
}
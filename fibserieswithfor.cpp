#include<iostream>
using namespace std;
void Fib(int n){
    int a=0;
    int b=1;
    cout<<a<<endl<<b<<endl;
    for (int i = 1; i <=n; i++)
    {
        int nextnum=a+b;
        cout<<nextnum<<endl;
        a=b;
        b=nextnum;
    }
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    Fib(n);

    
    return 0;
}
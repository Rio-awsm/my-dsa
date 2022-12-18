#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int sum=0;

    int i=1;
    while(i<=n){
        cout<<i<<endl;
        if(i%2==0){
        sum=sum+i;
        }
     i= i+1;
    }
    cout<<"value of sum is"<<sum;
}
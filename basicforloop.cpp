#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int sum=0;
    for(int i=0; i<=n;i++){
        sum=sum+i;
    }
    cout<<sum;
}

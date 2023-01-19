#include<iostream>
using namespace std;
int Fibonachi(int n){
      if(n==0){
        return 0;
      }
      if(n==1){
        return 1;
      }
     return( Fibonachi(n-1)+Fibonachi(n-2));

}


int main(){
    int n;
    cout<<"Enter the number of Fibonachi series required "<<endl;
    cin>>n;
    int ans=Fibonachi(n);
    cout<<"The number is "<<ans<<endl;

}
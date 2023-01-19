#include<iostream>
using namespace std;
int pow(int m, int n){
cin>>m>>n;
    int ans=1;

    for(int i=1;i<=n;i++){
        ans=ans*m;
    }
    return ans;
}

int main(){
    int a,b;
    
  int answer= pow(a,b);

    cout<<answer<<endl;
}

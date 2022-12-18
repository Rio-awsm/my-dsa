#include<iostream>
using namespace std;
int main(){
    int arr[3][4];


/*
//row wise input
    for(int i=0; i<3;i++){
        for(int j=0; j<4;j++){
            cin>>arr[i][j];
        }
    }
    */

  // col wise input
    for(int j=0; j<4;j++){
        for(int i=0; i<3;i++){
            cin>>arr[i][j];
        }
    }

for(int i=0; i<3;i++){
        for(int j=0; j<4;j++){
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;   
}
}
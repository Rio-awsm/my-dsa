#include<iostream>
using namespace std;
int maxarr(int arr[],int size){
    int max= INT8_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
return max;
}

int minarr(int arr[],int size){
    int min= INT8_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min= arr[i];
        }
    }
return min;
}

int main(){
    int num[100];
    int size;
    cin>>size;
    for(int i=0; i<size;i++){
        cin>>num[i];

    }
    cout<<"max in the array is "<<maxarr(num,size)<<endl;
    cout<<endl;
    cout<<"min in the array is "<<minarr(num,size)<<endl;
    cout<<endl;

}
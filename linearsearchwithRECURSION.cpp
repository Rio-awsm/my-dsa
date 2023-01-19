#include<iostream>
using namespace std;
bool linearsearch(int *arr, int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remaining= linearsearch(arr+1, size-1,key);
        return remaining;
    }
}
int main(){
    int arr[10]={12,33,45,1,0,67,3,78,90,11};
    int key;
    cout<<"Enter the element to search "<<endl;
    cin>>key;
    if(linearsearch(arr,10,key)){
        cout<<"Element is present "<<endl;
    }
    else{
        cout<<"The key is not present "<<endl;
    }
}
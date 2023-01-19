#include<iostream>
using namespace std;
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void sortarr(int *arr, int size){
    if(size==0||size==1){
        return;
    }
    for (int i=0;i<size;i++)
{
    if(arr[i]>arr[i+1]){
        swap(arr[i], arr[i+1]);
    }
} 
sortarr(arr, size-1);
}
int main(){

    int arr[10]={-1,8,98,23,78,11,2,998,0,12};
    sortarr(arr,10);
    printarr(arr,10);
}



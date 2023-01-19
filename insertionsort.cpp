#include <iostream>
using namespace std;
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void insertionsort(int arr[], int n){
   for(int i=1; i<n;i++){
    int temp=arr[i];
     int j=i-1;
    for(; j>=0;j--){
        if(arr[j]>temp){
             arr[j+1]=arr[j];
        }
        else{
            break;
        }         

    }
    arr[j+1]=temp;
   } 
}

//ver adaptable as the arry is getting sorted in every round
//very stable algo

int main(){
    int arr[10]={-1,8,98,23,78,11,2,998,0,12};
    insertionsort(arr,10);
    printarr(arr,10);
}
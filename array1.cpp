#include<iostream>
using namespace std;

void printarr(int arr[], int size){
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int number[10]={1,3,4,2,400,56,78,90,665,785};
    printarr (number,10);

    return 0;
}
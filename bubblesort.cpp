#include <iostream>
using namespace std;
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void bubblesort(int arr[], int n){
    for(int i=1; i<n; i++){
        bool swapped = false;

        for (int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);

                swapped= true;

            }
        }
        if(swapped== false){
            break;
        }

    }
}


int main(){
    int arr[10]={-1,8,98,23,78,11,2,998,0,12};
    bubblesort(arr,10);
    printarr(arr,10);
}
#include<iostream>
using namespace std;
void printarr(int arr[],int size){
    for(int i=0; i<size;i++){
        cout<<arr[i]<<endl;

    }
}
int partition(int arr[],int s, int e){
    int pivot= arr[s];
    int count=0;
    for(int i=s+1; i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //place pivot correctly
    int pivotindex=s+count;
    swap(arr[pivotindex], arr[s]);

    //now for left and right part
    int i=s;
    int j=e;
    while(i<pivotindex&& j>pivotindex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++], arr[j--]);
        }
            
    }
    return pivotindex;
}
void quicksort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    //do partition
    int p= partition(arr,s,e);

    //sort left part
    quicksort(arr,s,p-1);

    //sort right part
    quicksort(arr,p+1,e);

}
int main(){
    int arr[10]={10,2,334,67,89,0,1,30,-1,-99};
    int size=10;
    quicksort(arr,0,size-1);
     printarr(arr,size);
}
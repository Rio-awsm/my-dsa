#include<iostream>
using namespace std;
void printarr(int arr[],int size){
    for(int i=0; i<size;i++){
        cout<<arr[i]<<endl;

    }
}
void merge(int *arr,int s, int e){
    int mid = s+(e-s)/2;
    int len1= mid-s+1;
    int len2= e-mid;

    int *first= new int[len1];
    int *second= new int[len2];
    //copy values
    int  mainarrayindex=s;
    for(int i=0; i<len1; i++){
        first[i]=arr[ mainarrayindex++];
    }

    int mainarrindex= mid+1;
    for(int i=0; i<len2;i++){
        second[i]= arr[ mainarrayindex++];
    }
    //merge 2 sorted array
    int index1=0;
    int index2=0;
    mainarrayindex=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[ mainarrayindex++]= first[index1++];

        }
        else{
             arr[ mainarrayindex++]= second[index2++];

        }
    }
    while(index1<len1){
         arr[ mainarrayindex++]= first[index1++];
    }
    while(index2<len2){
         arr[ mainarrayindex++]= second[index2++];

    }
}

void mergesort(int *arr, int s, int e){
    //base case
    if(s>=e){
        return;
    }
    int mid= s+(e-s)/2;
    //sort left part
    mergesort(arr,s,mid);

    //sort right part
    mergesort(arr,mid+1,e);

    //merge
    merge(arr,s,e);

}
int main(){
    int arr[10]={10,2,334,67,89,0,1,30,-1,-99};
    int size=10;
    mergesort(arr,0,size-1);
    printarr(arr,10);
}
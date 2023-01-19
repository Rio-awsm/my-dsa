#include<iostream>
using namespace std;
bool issorted(int *arr,int size){
if(size==0|| size==1){
    return true;
}
if(arr[0]>arr[1]){
    return false;
}
else{
    bool reaminingpart= issorted(arr+1, size-1);
    return reaminingpart;   
}
}
int main(){
    int arr[10]={12 ,45, 6,112,678,8,10,323,1,0 };
    int brr[5]={1,2,3,4,5};
    
    if(issorted(arr,10)){
        cout<<"The array is sorted "<<endl;
    }
    else{
        cout<<"The array is not sorted"<<endl;
    }

     if(issorted(brr,5)){
        cout<<"The array is sorted "<<endl;
    }
    else{
        cout<<"The array is not sorted"<<endl;
    }

}
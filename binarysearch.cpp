#include <iostream>
using namespace std;
int binarysearch(int arr[],int size ,int key){
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        if(arr[mid]<key){
           start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=start+((end-start)/2);
}
return -1;
}

int main(){
    int even[10]={2,4,6,8,12,18,23,90,198,1233};
    int key;
    cout<<"enter the number you want to search "<<endl;
    cin>>key;

   int index= binarysearch(even,10, key );
    
cout<<"index of"<<key<<" is "<<index<<endl;

    return 0;
}

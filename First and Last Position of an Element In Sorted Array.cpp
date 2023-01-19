#include <iostream>
using namespace std;
int firstoccurence(int arr[],int size ,int key){
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);
    int ans=-1;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end= mid-1;
        }

       else if(arr[mid]<key){
           start=mid+1;
    }
    else if(arr[mid]>key){
        end=mid-1;
    }
    mid=start+((end-start)/2);
}
return ans;
}

int main(){
    int odd[5]={1,2,3,3,5};
    
   int index= firstoccurence(odd,5,3 );
    
cout<<"First occurencev of 3 is at index "<<index<<endl;

    return 0;
}
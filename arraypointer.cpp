#include<iostream>
using namespace std;
int main(){
  /* int arr[10]={23,122,41,67};

 cout<<"(1st)address of first memory block "<<arr<<endl;
 cout<<"2nd "<<arr[0]<<endl;
 cout<<"(3rd) address of first memory block "<<&arr[0]<<endl;
 cout<<"4th "<<*arr<<endl;
 cout<<"5th "<<(*arr)+1<<endl;
 cout<<"6th "<<*(arr+1)<<endl;
 cout<<"8th "<<arr[2]<<endl;
 cout<<"9th "<<*(arr+2)<<endl;//arr[i]= *(arr+i) same i[arr]=*(i+arr)
 int i=3;
 cout<<i[arr]<<endl;
}

int temp[10]={1,2};
cout<<sizeof(temp)<<endl;
cout<<sizeof(*temp)<<endl;
cout<<sizeof(&temp)<<endl;

int *ptr=&temp[0];
cout<<sizeof(ptr)<<endl;
cout<<sizeof(*ptr)<<endl;
cout<<sizeof(&ptr)<<endl;*/

int arr[10];
//error if arr=arr+1;
int *ptr=&arr[0];
cout<<ptr<<endl;
ptr=ptr+1;
cout<<ptr<<endl;

}
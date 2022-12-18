#include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<num<<endl;
    cout<<"address of num "<<&num<<endl;
    
      int*ptr=&num;
      cout<<"value is "<<*ptr<<endl;
      cout<<"adress is "<<ptr<<endl;

      cout<<"size of int is "<<sizeof(num)<<endl;
      cout<<"size of pointer is "<<sizeof(ptr)<<endl;
      cout<<"size of *ptr is "<<sizeof(*ptr)<<endl;
      


}
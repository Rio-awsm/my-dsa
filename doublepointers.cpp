#include<iostream>
using namespace std;
int main(){
    int i=5;
    int *ptr=&i;
    int **ptr2=&ptr;
    int ***ptr3=&ptr2;

    cout<<"i "<<i<<endl;
    cout<<"ptr "<<ptr<<endl;
    cout<<"*ptr "<<*ptr<<endl;
    cout<<"&i "<<&i<<endl;
    cout<<"ptr2 "<<ptr2<<endl;
    cout<<"*ptr2 "<<*ptr2<<endl;
    cout<<"&ptr "<<&ptr<<endl;
    cout<<"**ptr2 "<<**ptr2<<endl;
    cout<<"ptr3 "<<ptr3<<endl;
    cout<<"*ptr3 "<<*ptr3<<endl;
    cout<<"**ptr3 "<<**ptr3<<endl;
    cout<<"***ptr3 "<<***ptr3<<endl;
    cout<<"&ptr2 "<<&ptr2<<endl;
    

}
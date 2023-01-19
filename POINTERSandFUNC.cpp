#include<iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
    cout<<p<<endl;
}
void update1(int *p){
    p=p+1;
}
void update2(int *p){
    *p=*p+1;
}

int main(){
    int value=5;
    int *p=&value;

    //print(p);
    cout<<"before "<<*p<<endl;
    update1(p);
    cout<<"after1 "<<p<<endl;
    update2(p);
    cout<<"after2 "<<*p<<endl;
}
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character"<<endl;
    cin>>ch;

    if(ch>='a'&&ch<='z'){
        cout<<"the character is lowercase"<<endl;
    }
        
    else if(ch>='A'&&ch<='Z'){
        cout<<"the character is uppercasecase"<<endl;
    }
    else
    {
        cout<<"the character is a number "<<endl;

    }
}
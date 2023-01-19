#include<iostream>
using namespace std;
char tolowercase(char ch){
    //convert uppercase to lower and keep lowercase as it is
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        char temp= ch-'A'+'a';
        return temp;
    }
}
int getlength(char name[]){
    int count=0;
    for(int i=0; name[i] !='\0';i++){
        count ++;
    }
    return count;
}

bool checkpalindrome(char name[], int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if (tolowercase(name[s])!= tolowercase(name[e])){
            return 0;
        }
        else{
          s++;
          e--;  
        }
        return 1;
    }
}
int main(){
    char name[20];
    cout<<"Enter the text "<<endl;
    cin>>name;
    cout<<"your text is "<<name<<endl;
   int len= getlength(name);
    cout<<"checking palindrome "<<endl;
    if(checkpalindrome(name,len)){
        cout<<"It is palindrome "<<endl;
    }
    else{
        cout<<"Not a palindrome "<<endl;
    }
    return 0;

}
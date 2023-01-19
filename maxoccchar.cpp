#include<iostream>
using namespace std;
char getmaxocc(string s){
    int arr[26]={0};
    for(int i=0; i<s.length();i++){
        char ch=s[i];
        //lowercase
        int number=0;
        if(ch>='a'&& ch<='z'){
            int number=ch-'a';

        }
        else{//uppercase
        number=ch-'A';
        }
    arr[number]++;
    }
    int maxi=-1, ans=0;
    for(int i=0; i<s.length(); i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
char finalans='a'+ans;
return finalans;
}
int amin(){
    string s;
    cout<<"Enter the text "<<endl;
    cin>>s;
    cout<<getmaxocc(s);
    return 0;

}


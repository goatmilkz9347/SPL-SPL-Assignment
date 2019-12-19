#include<iostream>  //224451
#include<cstring>

using namespace std;

int main(){

    char str[100];
    int i,cnt=0,cnt1=0;

    cout<<"Enter a String: ";
    cin>>str;
    for(i=0;i<strlen(str);i++){
        if(str[i]=='b' && str[i+1]=='a'){
     cnt++;
            }
        if(str[i]=='a' && str[i+1]=='b'){
                cnt1++;
            }
    }
    if(cnt>0&&cnt1>0){
        cout<<"Substring ";
    }

    if(cnt==0||cnt1==0){
        cout<<"Not Substring ";
    }

    return 0;

}

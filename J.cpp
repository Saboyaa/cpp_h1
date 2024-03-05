#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        string s[2];
        cin>>s[0]>>s[1];
        int respondido = 0;
        if (s[0][0] == s[1][0]){
            cout<<"YES"<<"\n"<<s[0][0]<<"*"<<"\n";
            respondido = 1;
        }
        else if (s[0][s[0].length()-1]==s[1][s[1].length()-1]){
            cout<<"YES"<<"\n"<<"*"<<s[0][s[0].length()-1]<<"\n";
            respondido = 1;
        }
        for(int i =0;i<s[0].length()-1;i++){
            if(s[1].find(s[0].substr(i,2))!=string::npos){
                if(!respondido){cout<<"YES"<<"\n"<<"*"<<s[0].substr(i,2)<<"*"<<"\n";}
                respondido = 1;
            }
        }
        if(!respondido){
            cout<<"NO"<<"\n";
        }
    }
}
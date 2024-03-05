#include <bits/stdc++.h>

using namespace std;

int main(){
    int a=0,d=0;
    cin>>a>>d;
    int b[a];
    for(int i = 0;i<a;i++){
        if(i<=d){
            b[i]= d-i+1;
        }
        else{
            b[i] = i+1;
        }
    }
    
    for(int i = 0;i<a;i++){
        cout<<b[i]<<" ";
    }
    return 0;

} 
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a;
    cin>>a;
    map<pair<int,int>,string> map;
    for(int i=0;i<a;i++){
        int var1,var2;
        string stri1;
        cin>>var1>>var2>>stri1;
        map.erase(pair<int,int>(var1,var2));
        map[make_pair(var1,var2)]=stri1;
    }
    int b;
    cin>>b;
    for(int i=0;i<b;i++){
        int var1,var2;
        cin>>var1>>var2;
        cout<<map.find(pair<int,int>(var1,var2))->second<< '\n';
    }
    return 0;
}
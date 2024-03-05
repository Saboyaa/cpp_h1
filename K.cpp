#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a;
    cin>>a;
    if(a == 1){
        string s;
        cin>>s;
        cout<<s.length();
    }
    else{
        int a=0,b=0;
        string s,d,s2,d2;
        cin>>s>>d;
        for(int j = min(s.length(),d.length());j>0;j--){

                s2 = s.substr(0,j);
                if(d.find(s2)!= string::npos){
                    if(a<j){
                    a = j;
                    }
            }
        }
        for(int j = min(s.length(),d.length());j>0;j--){
                d2 = d.substr(0,j);
                if(s.find(d2)!= string::npos){
                    if(b<j){
                    b = j;
                    }
            }
        }
        cout<<s.length()+d.length() - max(a,b);

    }
    return 0;

} 
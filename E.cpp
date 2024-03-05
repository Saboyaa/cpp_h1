#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b=0,h=0;
    cin>>a;
    set<int> myset;
    set<int>::iterator itup,itup2;

    char d;
    for(int i=0;i<a;i++){
        char c;
        cin>>c>>b;
        itup = myset.lower_bound(b);
        itup2 = myset.lower_bound(h);
        if(d=='?'&&c=='+'){
            myset.insert((*itup2+b)%(int(pow(10,9))));
        }
        else if(c=='+'){
            myset.insert(b);
        }
        d = c;
        if(d=='?'){
            if(itup!=myset.end()){
            cout<<*itup<<'\n';
            }
            else{cout<<"-1";}
        }
        h = b;
    }
} 
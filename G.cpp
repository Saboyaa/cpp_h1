#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,d;
    cin>>a>>d;
    map<int,int> mapa;
    int f,g;
    for(int i = 0;i<a;i++){
        cin>>f;
        if (i == 0){
            g = f-1;
        }
        if(f>g){
            mapa[f] = i;
            g = f;
        }
    };
    map<int,int>::iterator e;
    for(int i = 0;i<d;i++){
        int c;
        cin>>c;
        e = mapa.find(c);
        if(e != mapa.end()){
            cout<<mapa.find(c)->second<<'\n';
        }
        else{
            cout<<"-1"<<'\n';
        }

    };
    return 0;

} 
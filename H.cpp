#include <bits/stdc++.h>

using namespace std;
struct Par {
    int primeiro, segundo;
    };
    bool compare(Par i1, Par i2){
        return ((i1.primeiro < i2.primeiro)||(i1.primeiro == i2.primeiro && i1.segundo> i2.segundo));
    };
int main(){
    int k;
    cin>>k;
    for(int i = 0;i<k;i++){
    int n;
    cin>>n;
    Par vect[n];
    for(int i =0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vect[i].primeiro =a;
        vect[i].segundo =b;
    };
    sort(vect,vect+n,compare);
    for(int i =0;i<n;i++){
        cout<<vect[i].primeiro<<" "<<vect[i].segundo<<"\n";
    };
    }
} 
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int a,d,e=1;
    cin>>a;
    vector<int> b;
    for(int i = 0;i<a;i++){
        int f;
        cin>>f;
        b.push_back(f);
    };
    sort(b.begin(),b.begin()+a);
    d = b[0];
    for(int i = 0;i<a;i++){
        if (d!=b[i]){
            e++;
            d = b[i];
            
        }
    };
    cout<<e;
    return 0;

} 
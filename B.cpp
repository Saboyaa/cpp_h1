#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i =0;i<a;i++){
        cin>>b[i];
    };
    sort(b,b+a);
    cout<<b[(a+1)/2-1];
} 
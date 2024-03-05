#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a,d;
    cin>>a;
    int b[a];
    for(int i = 0;i<a;i++){
        cin>>b[i];
        if (d>b[i] || !i){
            d = b[i];
        }
    };
    for(int i = 0;i<a;i++){
        for(int j = i;j<a;j++){
            if(b[i]>b[j]){
                int flutuante;
                flutuante = b[i];
                b[i] = b[j];
                b[j] = flutuante;
            }
        }
    };
    for(int i = 0;i<a;i++){
        if (d!=b[i]){
            cout<<b[i];
           return 0;
            
        }
    };
    cout<<"NO";
    return 0;

} 
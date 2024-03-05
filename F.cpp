#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin>>s;
    if(s.find("Danil")!=string::npos){
        if((s.find("Danil",s.find("Danil")+1)!=string::npos)||(s.find("Olya")!=string::npos)||
        (s.find("Slava")!=string::npos)||(s.find("Ann")!=string::npos)||
        (s.find("Nikita")!=string::npos) ){
            cout<<"NO";
            return 0;
        }
        else{
            cout<<"YES";
            return 0;
        }
    };
    if(s.find("Olya")!=string::npos){
        if((s.find("Olya",s.find("Olya")+1)!=string::npos)||(s.find("Danil")!=string::npos)||
        (s.find("Slava")!=string::npos)||(s.find("Ann")!=string::npos)||
        (s.find("Nikita")!=string::npos) ){
            cout<<"NO";
            return 0;
        }
        else{
            cout<<"YES";
            return 0;
        }
    };
    if(s.find("Slava")!=string::npos){
        if((s.find("Slava",s.find("Slava")+1)!=string::npos)||(s.find("Olya")!=string::npos)||
        (s.find("Danil")!=string::npos)||(s.find("Ann")!=string::npos)||
        (s.find("Nikita")!=string::npos) ){
            cout<<"NO";
            return 0;
        }
        else{
            cout<<"YES";
            return 0;
        }
    };
    if(s.find("Ann")!=string::npos){
        if((s.find("Ann",s.find("Ann")+1)!=string::npos)||(s.find("Olya")!=string::npos)||
        (s.find("Slava")!=string::npos)||(s.find("Danil")!=string::npos)||
        (s.find("Nikita")!=string::npos) ){
            cout<<"NO";
            return 0;
        }
        else{
            cout<<"YES";
            return 0;
        }
    };
    if(s.find("Nikita")!=string::npos){
        if((s.find("Nikita",s.find("Nikita")+1)!=string::npos)||(s.find("Olya")!=string::npos)||
        (s.find("Slava")!=string::npos)||(s.find("Ann")!=string::npos)||
        (s.find("Danil")!=string::npos) ){
            cout<<"NO";
            return 0;
        }
        else{
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;

} 
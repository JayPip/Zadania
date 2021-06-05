#include<iostream>
#include<string>

using namespace std;

bool dirty(string s){
    string dirt="1234567890";
    int len=dirt.length();
    bool lel=0;

    for(int j=0;j<len;j++){
            if(lel==1)break;
        for(int i=0;i<len-1;i++){
            if(dirt[i]==s[j]){
                lel=1;
                break;
            }


        }



    }

    return lel;
}



int main(){
string s;
cin>>s;

cout<<dirty(s);

return 0;

}



#include<iostream>
#include<string>

using namespace std;


string filter(string s, char k){


    int len=s.length();

    for(int i=0;i<len;i++){
        if(s[i]==k){
            for(int j=0;j<len-i;j++){
                swap(s[i+j],s[i+j+1]);
            }
            s[len-1]=NULL;
            i--;
        }

    }


return s;





}


int main(){
string s;
char k;

cin>>s>>k;

cout<<filter(s,k);





return 0;

}

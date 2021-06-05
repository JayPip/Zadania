#include<iostream>
#include<string>

using namespace std;



bool pal(string s){

int len=s.length();

bool bul=1;



for(int i=0; i<len/2;i++){
   if(s[i]!=s[len-i-1])bul=0;
    break;
}







return bul;

}


int main(){
string s;
cin>>s;

cout<<pal(s);

return 0;

}

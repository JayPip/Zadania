#include<iostream>
#include<string>

using namespace std;


string rev(string s){

int len=s.length();


for(int i=len-1;i>(len-1)/2;i--){
    swap(s[i],s[len-1-i]);


}

return s;


}


int main(){
string s;
cin>>s;

cout<<rev(s);

return 0;

}


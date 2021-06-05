#include<iostream>
#include<string>

using namespace std;

bool pesel(string s){
bool k=1;

int len=s.length();


    if(len!=9)k=0;







return k;
}



int main(){
string s;
cin>>s;


cout<<pesel(s);




return 0;

}


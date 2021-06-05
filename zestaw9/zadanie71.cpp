#include<iostream>
#include<string>

using namespace std;

string first(string s1, string s2){
string alf="abcdefghijklmnoprstuw";


int len=alf.length();

int i;
int j;

for(int k=0;k<len;k++){


for( i=0;i<len;i++){
    if(alf[i]==s1[k]){
    break;
}
}



for( j=0;j<len;j++){
    if(alf[j]==s2[k]){
    break;
}
}



if(i<j){return s1;
break;
}
else if(j<i){return s2;
break;
}
else continue;


}

}



int main(){

string s1;
string s2;


cin>>s1>>s2;


cout<<first(s1,s2);





return 0;

}


#include<iostream>
#include<string>
#include<fstream>

using namespace std;


int main(){

fstream file;
string s;
int ctr=0;
int litery[26]={};
string alfabet="abcdefghijklmnopqrstuwvxyz";
int dlugosc;


file.open("Jabberwocky.txt");



while(getline(file,s)){
dlugosc=s.length();

for(int i=0;i<dlugosc;i++){
    for(int j=0;j<26;j++){
        if(s[i]==alfabet[j]){
            litery[j]++;
        }
    }

}

}


for(int i=0;i<26;i++){
    cout<<alfabet[i]<<" "<<litery[i]<<endl;

}




file.close();

return 0;

}

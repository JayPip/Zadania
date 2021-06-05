

#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
#include<ctime>


using namespace std;


int main(){
fstream file;
file.open("election.txt", ios::in);
string s;

int kandydaci[26]={};


while(getline(file,s)){
        for(int i=0;i<s.size();i++){
        kandydaci[s[i]-65]+=(s.size()-i);
        }
}

int maks=kandydaci[0];
int kandydat=0;
for(int i=0;i<26;i++){
if(kandydaci[i]>maks){
    maks=kandydaci[i];
    kandydat=i;

}
}

char wygrany=kandydat+65;


cout<<"wygrywa kandydat "<<wygrany<<endl;


file.close();
return 0;

}


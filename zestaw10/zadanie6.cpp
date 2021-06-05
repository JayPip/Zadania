

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
int kandydat=0;

while(getline(file,s)){
        kandydaci[s[0]-65]++;
        }

int maks=kandydaci[0];

    for(int i=0;i<26;i++){
    if(kandydaci[i]>maks){
    maks=kandydaci[i];
    kandydat=i;}

    }


char wygrany=kandydat+65;


cout<<"wygrywa kandydat "<<wygrany<<endl;


file.close();
return 0;

}

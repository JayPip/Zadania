

#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
#include<ctime>
#include<cstdlib>


using namespace std;


int main(){
fstream file;
file.open("election.txt", ios::in);
string s;
srand( time( NULL ) );
int kandydaci[26]={};
char wygrany=' ';
int ctr=0;
int maks,maks1;

while(getline(file,s)){
        kandydaci[s[0]-65]+=1;
        ctr++;
}

for(int i=0;i<26;i++){
    cout<<kandydaci[i]<<endl;
    if(kandydaci[i]>ctr/2)wygrany=i+65;
}

maks=kandydaci[0];
maks1=kandydaci[0];


int kandydat1,kandydat2;


if(wygrany!=' ')cout<<"wygrywa kandydat "<<wygrany<<endl;

else{
for(int i=0;i<26;i++){
    if(kandydaci[i]>maks){maks=kandydaci[i];
    kandydat1=i;
    }
}


for(int i=0;i<26;i++){
    if(kandydaci[i]>maks1 && i!=kandydat1){
    kandydat2=i;
    }
}


int losowanie2[ctr]={};

for(int i=0;i<ctr;i++){
    losowanie2[i]=rand()%2;
}

int liczba1=0,liczba2=0;

for(int i=0;i<ctr;i++){
if(losowanie2[i]==0)liczba1++;
if(losowanie2[i]==1)liczba2++;
}


if(liczba1>=liczba2)wygrany=kandydat1+65;
else if(liczba1<liczba2)wygrany=kandydat2+65;



cout<<"wygrywa kandydat "<<wygrany<<endl;
}

file.close();
return 0;

}


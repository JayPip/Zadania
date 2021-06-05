
#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
#include<ctime>
#include<ostream>

using namespace std;


int main(){
fstream file;
file.open("election.txt", ios::trunc | ios::in |ios::out);



int liczba=0;
string s="";
int n,m;

cin>>n>>m;
s.resize(m,' ');



for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
    s[i]=i+65;

    }
    random_shuffle(s.begin(),s.end());
    file<<s<<endl;



}




file.close();
return 0;

}

#include<iostream>
#include<string>
#include<fstream>

using namespace std;


int main(){

fstream file;
string s;
int ctr=0;

file.open("Jabberwocky.txt");
while(file>>s)ctr++;
file.close();

cout<<ctr<<endl;
return 0;

}


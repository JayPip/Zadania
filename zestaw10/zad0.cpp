#include<iostream>
#include<string>
#include<fstream>

using namespace std;


int main(){

fstream file;
string s;
int ctr=0;

file.open("Jabberwocky.txt");
if(file.good()==true)
while(getline(file,s))cout<<s<<endl;

file.close();
return 0;

}

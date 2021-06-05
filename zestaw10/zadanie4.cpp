#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>

using namespace std;


int main(){

fstream input,output;

input.open("palindromy.txt");
output.open("palindromyout.txt");


string s;

while (getline(input, s)){

    if(s[0]=='„')
    reverse (s.begin(), s.end());
    output<<s<<endl;
}
input.close();
output.close();

return 0;

}

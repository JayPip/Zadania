#include<iostream>
#include<cmath>
#include<string>

using namespace std;

string bin2dec( string s, int base){


int n=s.length();


int suma=0;
string wynik="";

for(int i = 0; i<n;i++){
    suma+=((s[i]-48)*(pow(base, (n-1-i))));
}
while(suma){
    char digit= suma%10+48;
    wynik=digit+wynik;
    suma/=10;


}
return wynik;

}


int main(){

string s ;
cin>>s;

cout<<bin2dec(s, 2);


}

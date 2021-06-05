#include<iostream>
#include<cmath>
#include<string>
#include<cstdio>
#include<stdio.h>


using namespace std;

string change_base( string s, int base1, int base2){


int n=s.length();


int suma=0;
string wynik="";

for(int i = 0; i<n;i++){
    suma+=((s[i]-48)*(pow(base1, (n-1-i))));
    cout<<suma<<" ";
}
while(suma>0.99 ){
    char digit= suma%base2+48;
    if(digit>57)digit+=8;
    wynik=digit+wynik;
    suma/=base2;

}
return wynik;

}


int main(){

string s ;
int n,m;
cin>>s>>n>>m;




cout<<change_base(s, n,m);


}

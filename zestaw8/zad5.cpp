#include<iostream>
#include<cmath>
using namespace std;


long long doublefac(int n){
if (n<=1) return 1;
else return n* doublefac(n-2);

}


int main(){

int b;
cin>>b;

cout<<doublefac(b);


return 0;
}





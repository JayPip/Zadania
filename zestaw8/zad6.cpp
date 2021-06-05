#include<iostream>
#include<cmath>
using namespace std;


long long doublefac(int n){
long long a=1;
while (n>1) {
    a*=n;
    n-=2;
}

return a;
}

int main(){

int b;
cin>>b;

cout<<doublefac(b);

return 0;
}






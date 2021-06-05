#include<iostream>
#include<cmath>
using namespace std;


int fib(int n){
if (n==1 || n==2) return 1;
else return fib(n-1)+fib(n-2);

}

int main(){
int b;

cin>>b;
cout<<fib(b)<<endl;


return 0;
}




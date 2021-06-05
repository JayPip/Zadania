#include<iostream>
#include<cmath>
using namespace std;


int fib(int n){

int a = 0;
int b = 1;
int c;
int i;

    if( n == 0)
        return a;
    for(i = 2; i <= n; i++)
    {
       c = a + b;
       a = b;
       b = c;
    }
    return b;

}

int main(){
int b;

cin>>b;
cout<<fib(b)<<endl;


return 0;
}




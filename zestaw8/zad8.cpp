#include<iostream>
#include<cmath>
using namespace std;


int multiply(int x, int y) {return x*y;}
int add(int x, int y) {return (x+y);}

int operation(bool* c, int a, int b){
if (*c==1) cout<<add(a,b);
else cout<<multiply(a,b);

}



int main(){
int a,b;
bool c;
cin>>c>>a>>b;

operation(&c,a,b);

return 0;
}


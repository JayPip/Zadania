#include<iostream>
#include<cmath>
using namespace std;

void root(double* x){
*x=sqrt(*x);


}

int main(){
double x;
cin>>x;


root(&x);
cout<<x;


return 0;
}



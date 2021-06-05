#include<iostream>

using namespace std;

int arear;
int areas;
double areac;
int a;
int b;
double r;
int area(int a);
int area(int a, int b);
double area(double r);


int main(){
cin>>a;
area(a);
cout<<areas<<endl;


cin>>a>>b;
area(a, b);
cout<<arear<<endl;

cin>>r;
area(r);
cout<<areac;

return 0;
}

int area(int a){
areas=a*a;
return areas;
}

int area(int a, int b){
arear=a*b;
return arear;
}


double area (double r){
areac=3.14*r;
return areac;
}



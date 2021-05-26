#include<iostream>
using namespace std;

int main(){

int number;



cin>>number;
if(number>20)return -1;

int hcsk;


int A[number];
int *p;
p=A;

for(int i =0; i< number; i++){
cin>>*p;
if(*p<0)*p=-*p;
p++;
}




return 0;
}
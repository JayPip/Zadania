#include<iostream>
#include<c.math>
using namespace std;

int main(){

int number;


int hcsk;


cin>>number;
if(number>20)return -1;



int A[number];
int *p;
p=A;

for(int i =0; i< number; i++){
*p=pow(2,i);
p++;
}




return 0;
}
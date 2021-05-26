#include<iostream>
using namespace std;

int main(){

int number;



cin>>number;
if(number>20)return -1;




float A[number];
float *p;
p=A;

float B[number];
float *b;
b=B;



for(int i =0; i< number; i++){
cin>>*p;
*b=(*p)/3;



p++;
b++;
}

p=A;
b=B;

for(int i =0; i< number; i++){
    cout<<*p<<" "<<*b<<endl;
    p++;
    b++;
}


return 0;
}
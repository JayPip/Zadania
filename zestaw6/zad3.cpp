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

int sum =0;

for(int i =0; i< number; i++){
    if(sum<100){
        cin>>*p;
        sum+=*p;
        p++;
    }

    else{
        *p=0;
    
        p++;
    };
}




return 0;
}
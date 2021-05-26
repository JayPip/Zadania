#include<iostream>

using namespace std;
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

int main(){

int number;
int indeks;
cin>>number>>indeks;
 srand (time(NULL));
int A[number];
int *p;
p=A;

for(int i =0; i< number; i++){
*p = rand()%11;
cout<<*p<<endl;
p++;
}



p=A;


for(int j=0; j<indeks;j++){
    int temp = *p;
    for(int i =0;i<number-1; i++){

    *p=*(p+1);

    p++;
    }
    *p=temp;
    p=A;
}

p=A;
for(int i =0; i< number; i++){
cout<<*p<<endl;
p++;
}



return 0;
}
#include<iostream>

using namespace std;
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

int main(){

int number;
cin>>number;
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
int maks=0;

for(int i =0; i< number; i++){
if(*p>maks )
maks=*p;

p++;
}

cout<<maks<<endl;

return 0;
}
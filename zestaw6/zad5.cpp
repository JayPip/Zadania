#include<iostream>
using namespace std;
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

int main(){
 srand (time(NULL));
int number;
cin>>number;

int A[number];
int *p;
p=A;

for(int i =0; i< number; i++){
*p = rand()%11;
cout<<*p<<endl;
p++;
}




return 0;
}
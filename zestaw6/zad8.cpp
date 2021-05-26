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

int *b;
p=A;
b=(int *)(&A + 1) - 1;

for(int i =0; i< number/2; i++){
int temp = *p;

if(number%2 == 0){
*p=*b;
*b = temp;

}

else{
*p=*b;
*b = temp;


}
b--;
p++;
}

p=A;

for(int i =0; i< number; i++){
cout<<*p<<endl;
p++;
}

return 0;
}
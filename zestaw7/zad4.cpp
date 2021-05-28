#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;


int factorial(int number){
    int fact = 1;
    for(int i = 1; i<=number;i++){
        
        fact*=i;

    }

    return fact;

}

int Newton(int n, int k){
    return factorial(n)/(factorial(k)*factorial(n-k));

}



int main(){


int size1;


cin>>size1;


int **S = new int*[size1];

for(int i= 0; i<size1; i++){
    *(S+i) = new int [i+1];
    
}

for(int i=0;i<size1;i++){
        for(int j=0;j<i+1;j++){
            *(*(S+i)+j)=Newton(i,j);
            cout<<*(*(S+i)+j)<<" ";
        }
       cout<<endl;
    }


delete [] S;
return 0;
}
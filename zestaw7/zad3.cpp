#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

int size1;
int size2;

cin>>size1>>size2;


int x[size1];
int y[size2];

int *xp = x;
int *yp = y;


for(int i = 0; i< size2; i++){
*yp =rand()%21 - 10;
yp++;
}

for(int i = 0; i< size1; i++){
*xp = rand()%21 -10;
xp++;
}

 int *prod = new int[size1+size2-1];
 
   
   for (int i = 0; i<size1+size2-1; i++)
     prod[i] = 0;
 
    xp = x;
    yp = y;
 
  
   for (int i=0; i<size1; i++)
   {
     for (int j=0; j<size2; j++){
        prod[i+j] += *xp*(*yp);
        yp++;
     }
        xp++;

   }
 
   for(int i = 0 ; i< size1+size2-1;i++)cout<<prod[i]<<endl;






return 0;
}
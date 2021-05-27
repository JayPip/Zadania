#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<cstdlib>
#include<ctime>
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

 

return 0;
}
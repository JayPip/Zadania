#include<iostream>
#include <bits/stdc++.h>
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
*yp =rand()%31;
yp++;
}

for(int i = 0; i< size1; i++){
*xp = rand()%31;
xp++;
}



sort(x, x+size1);
sort(y, y+size2);


int size3= size1+size2;

int xy[size3];
int *pointer = xy;

xp = x;
yp = y;

for(int i = 0; i<size3; i++ ){
    if(i<size1){
    *pointer =  *xp;
    xp++;
    pointer++;
    }
    else {
    *pointer =  *yp;
    yp++;
    pointer++;
    }


}

sort(xy, xy+size3);

for(int i =0; i< size3; i++)
cout<<xy[i]<<endl;

return 0;
}
#include<iostream>

using namespace std;


int main(){


int size = 3;
int x[size] ={1,2,3};
int y[size] = {4,5,6};

int *xp = x;
int *yp = y;


for(int i = 0; i< size; i++){
int temp = *xp;
*xp = *yp;
*yp = temp;

xp++;
yp++;

}


for(int i = 0; i< size; i++)
cout<<x[i]<<" "<<y[i]<<endl;

return 0;
}
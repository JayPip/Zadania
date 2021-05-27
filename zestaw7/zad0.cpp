#include<iostream>

using namespace std;
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

int main(){

int x =10;
int y = 14;

int *xp = &x;
int *yp = &y;

int temp = *xp;
*xp = *yp;
*yp = temp;

cout<<x<<" "<<y<<endl;

return 0;
}
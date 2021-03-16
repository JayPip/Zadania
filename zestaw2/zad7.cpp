
#include<cmath>


#include <iostream>
using namespace std

int main() {
int x,y,z;

cin>>x>>y>>z;

if(x<y && x<z)cout<< "x";
else if(x>y && y<z) cout<<"y";
else if( z<y && z <x) cout<<"z";

return 0;
}

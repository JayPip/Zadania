#include<cmath>


#include <iostream>
using namespace std

int main() {
int x1,y1,x2,y2,r1,r2;

cin>>x1>>y1>>r1>>x2>>y2>>r2;


int d;
d= sqrt((x2-x1)^2 + (y2-y1^2))

if (r1<d && r2<d) cout<<"brak wspolnego pola"
else cout << "wspolne pole jest obecne"

return 0;
}

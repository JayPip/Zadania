


#include <iostream>
using namespace std;

int main() {
float t1,t2,m;

cin>>t1>>t2>>m;


if (t2>t1){
    float p =(t2*100)/(t1)-100;

        p/=100;
        m+=m*p;
    cout<<m;
}


else cout<<"nie inwestowac";
return 0;
}

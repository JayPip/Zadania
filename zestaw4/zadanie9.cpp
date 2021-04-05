#include <iostream>
#include <cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
int main()
{
int n=100;
bool P[n]={1};
P[0]=0;
P[1]=0;
for(int x=2; x<n; x++){
P[x]=1;
}

for(int m=2; m<sqrt(n); m++){
   if (P[m]){
        for(int i=m*m; i<n; i+=m){P[i]=false;}
    }
}
for(int x=2; x<n; x++){
    if(P[x]){
        cout<<x<<endl;
    }

}
  return 0;
}



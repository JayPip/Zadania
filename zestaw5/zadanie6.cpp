#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
srand(time(NULL));
int n=20;
int x=3;

int D[n][n][x];

for (int k=0; k<n; k++){
  for(int j=0; j<n; j++){
    for(int i=0; i<x; i++){

    D[k][j][i]=(rand()%255);

    cout<<D[k][j][i]<<" ";
    }
    cout<<"  |  ";
  }
  cout<<endl;
}

return 0;
}

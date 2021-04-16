#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
srand(time(NULL));
int n=20;
int x=3;
int av;

int D[n][n][x];

for (int k=0; k<n; k++){
  av=0;
  for(int j=0; j<n; j++){
    for(int i=0; i<x; i++){

    D[k][j][i]=(rand()%255);
    }
    av=(D[k][j][0]+D[k][j][1]+D[k][j][2])/3;
    cout<<av<<" "<<av<<" "<<av;
    cout<<"  |  ";
  }
  cout<<endl;
}

return 0;
}

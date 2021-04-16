
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    int n=7;
int P[n][n];


for(int j=0;j<n;j++){
  P[j][0]=1;
  cout<<P[j][0]<<" ";

  for(int i=1; i<=j;i++){
    P[j][j]=1;
    if(i!=j){
    P[j][i]=P[j-1][i-1]+P[j-1][i];
    cout<<P[j][i]<<" ";
    }
    else if(i==j){
    cout<<P[j][j];
  }
}
cout<<endl;
}
return 0;
}

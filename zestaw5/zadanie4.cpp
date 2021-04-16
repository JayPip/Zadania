#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
srand(time(NULL));
int n=7;
int C[n][n];
float maxw;
float maxk;
int temp;

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        C[i][j]= rand()%21-10;
    }


}


for(int i =0; i<n; i++)
{
    for(int j=0; j<n; j++){cout<<C[i][j]<<" ";
}
cout<<endl;
}

cout<<"------------------------------"<<endl;

for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
  temp=C[i][j];
  C[i][j]=C[j][i];
  C[j][i]=temp;
  }
}

for(int i =0; i<n; i++)
{
    for(int j=0; j<n; j++){cout<<C[i][j]<<" ";
}
cout<<endl;
}

return 0;
}

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
srand(time(NULL));
int n=7;
int C[n][n];
int temp1;
int temp2;

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

int MAX=C[0][0];
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++)
        if(C[i][j]>MAX){
        MAX=C[i][j];
        temp1=i+1;
        temp2=j+1;}
}
        cout<<MAX<<endl;
        cout<<temp1<<" "<<temp2<<endl;

return 0;
}
